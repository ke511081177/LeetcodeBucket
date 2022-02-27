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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        
        queue<pair<TreeNode*,int>> q;
        int res = 0;
        q.push({root,0});
        
        while(!q.empty()){
            
            int len = q.size();
            int start = q.front().second;
            int end = q.back().second;
            
            res = max(end-start+1, res);
            
            for(int i = 0; i < len; i++){
                
                pair<TreeNode*,int> temp = q.front();
                
                q.pop();
                
                
                if(temp.first->left)  q.push({temp.first->left, (long long)2*temp.second+1});
                if(temp.first->right) q.push({temp.first->right, (long long)2*temp.second+2});
                
            }
        }
        return res;
        
    }
};