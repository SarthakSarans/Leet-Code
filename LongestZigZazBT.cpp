class Solution {
public:
    void dfs(TreeNode* root, bool isLeft, int& maxi, int counter){
        if(!root) return;
        if(isLeft){
                isLeft = false;
                counter++;
                maxi = max(maxi,counter);
                dfs(root->right, isLeft, maxi, counter); 
                dfs(root->left, isLeft, maxi, 0);
            }
        else{
                isLeft = true;
                counter++;
                maxi = max(maxi,counter);
                dfs(root->left, isLeft, maxi, counter);
                dfs(root->right, isLeft, maxi, 0);
            }
        }
    
    int longestZigZag(TreeNode* root) {
        int maxi = 0;   
        dfs(root, true, maxi, 0);
        dfs(root, false, maxi, 0);
        return maxi-1;

    }
};