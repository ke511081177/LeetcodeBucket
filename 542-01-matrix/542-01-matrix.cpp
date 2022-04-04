class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int m = mat.size(), n = mat[0].size();


        vector<vector<int>> res(m, vector<int>(n,INT_MAX));
        vector<pair<int,int>> dirs{{0,1},{1,0},{0,-1},{-1,0}};
        queue<pair<int,int>> q;
        for(int i = 0;i < mat.size(); i++){
            for(int j = 0; j <mat[0].size(); j++){
                if(mat[i][j] == 0){
                    res[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            int curx = q.front().first;
            int cury = q.front().second;
            
            q.pop();
            for(auto dir:dirs){
                int x = curx + dir.first;
                int y = cury + dir.second;
                if(x>=0 and x<m and y>=0 and y<n){
				
                    if(res[x][y] > res[curx][cury] + 1){
                        res[x][y] = res[curx][cury] + 1;
					
                        q.push({x,y});
                    }
                }
            }
        }
            
        return res;
    }
};