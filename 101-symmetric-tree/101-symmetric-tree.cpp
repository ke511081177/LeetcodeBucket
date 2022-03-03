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
    bool check(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) 
            return true;
        
        if(left == NULL || right == NULL) 
            return false;
        
        if(left->val != right->val)
            return false;
        
        return check(left->left,right->right) && check(left->right,right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(!root) return true;
        
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        
        
        while(!q.empty()){
            TreeNode* l = q.front();
            q.pop();
            TreeNode* r = q.front();
            q.pop();
            
            if( !l&&r || l&&!r)
                return false;
            if(l){
                if(l->val != r->val)
                    return false;
                q.push(l->left);
                q.push(r->right);
                q.push(l->right);
                q.push(r->left);
            }
            
        }
        return true;
    }
};