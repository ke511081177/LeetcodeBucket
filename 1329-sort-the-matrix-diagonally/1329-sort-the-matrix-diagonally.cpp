class Solution {
public:
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int row =mat.size(), col = mat[0].size(); 
        unordered_map<int,vector<int>> mp;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col;j++)
                mp[i-j].push_back(mat[i][j]);
        }
        for(int i = -(col-1); i < row; i++)
            sort(mp[i].begin(),mp[i].end());
        
        for(int i = row-1; i >=0; i--){
            for(int j = col-1; j >=0; j--){
                mat[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        return mat;
    }
};