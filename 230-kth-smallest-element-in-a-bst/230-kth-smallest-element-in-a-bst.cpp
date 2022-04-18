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
 
    int res;
    void dfs(TreeNode* root, int &k){
        if(k == 0 || !root)
            return;
        dfs(root->left,k );
        
        if(-- k == 0)
            res = root->val;
        
        dfs(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        dfs(root,k);
        return res;
    }
};