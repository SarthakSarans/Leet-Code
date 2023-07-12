/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
    ListNode* curr = head;
    unordered_map<int*, int> inList;
    while (curr != NULL) {
        if (inList.find(&curr->val) != inList.end()) {
            return true;
        }
        inList[&curr->val] = curr->val;
        curr = curr->next;
    }
    return false;
}
};