class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        vector<vector<int>> res;
        
        for(int i = 0; i < matrix[0].size();i++){
            res.push_back({});
            for(int j = 0; j < matrix.size();j++){
                res[i].push_back(matrix[j][i]);
                
            }
        }
        return res;
    }
};