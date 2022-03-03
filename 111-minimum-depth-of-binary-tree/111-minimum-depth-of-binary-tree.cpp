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
//     int check(TreeNode* root, int depth){
        
//         if(!root)
//             return depth-1;
//         if(root->left && root->right)
//             return min(check(root->left, depth+1),check(root->right, depth+1));
//         return max(check(root->left, depth+1),check(root->right, depth+1));
//     }
   int minDepth(TreeNode* root) {
        
        int res = 0;
        if(!root)
            return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            res++;
            
            int len = q.size();
            
            // trace every level
            for(int i = 0; i < len; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                if(!temp->left && !temp->right)
                    return res;
            }
            
        }
        return res; 
    } 
    
};