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
    TreeNode* trace = new TreeNode(0);
    TreeNode* res = trace;
    void dfs(TreeNode* root){
        if(!root)
            return;
        
        dfs(root->left);
        trace->right = new TreeNode(root->val);
        trace = trace->right;
        dfs(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        dfs(root);
        return res->right;
        
    }
};