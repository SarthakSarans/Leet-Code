/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* tmp = head;
       ListNode* result = new ListNode();
       if (head == NULL){
           return NULL;
       }
        result->val = head->val;
       while(tmp->next != NULL){
            tmp = tmp->next;
            ListNode* tmp1 = new ListNode();
            tmp1->val = tmp->val;
            tmp1->next = result;
            result = tmp1;
       }
       return result;
    }
};