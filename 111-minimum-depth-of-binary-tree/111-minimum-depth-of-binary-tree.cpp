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
    int check(TreeNode* root, int depth){
        
        if(!root)
            return depth-1;
        if(root->left && root->right)
            return min(check(root->left, depth+1),check(root->right, depth+1));
        return max(check(root->left, depth+1),check(root->right, depth+1));
    }
    
    int minDepth(TreeNode* root) {
        
        int res = 0;
        if(!root)
            return res;
        
        return check(root, res+1); 
    }
};