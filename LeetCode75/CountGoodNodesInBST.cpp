/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void travel(TreeNode* root, int curmax, int&total){
        if(root==NULL){
            return;
        }
        curmax = max(root->val,curmax);
        if(curmax == root->val){
            total++;
        }
        travel(root->left,curmax,total);
        travel(root->right,curmax,total);

    }
    int goodNodes(TreeNode* root) {
        int currMax = root->val;
        int total = 0;
        travel(root,currMax,total);
        return total;

    }
};