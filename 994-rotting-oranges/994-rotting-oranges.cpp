class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> rotten;
        int fresh = 0;
        vector<pair<int,int>> dirs{{0,1},{1,0},{0,-1},{-1,0}};
        int res = -1;
        int m = grid.size(), n = grid[0].size();
        
        for(int i = 0;i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2)
                    rotten.push({i,j});
                if(grid[i][j] == 1)
                    fresh++;
            }
        }
        while(!rotten.empty()){
            int size = rotten.size();
            while(size--){
                int curx = rotten.front().first;
                int cury = rotten.front().second;
                rotten.pop();

                for(auto dir:dirs){
                    int x = dir.first + curx;
                    int y = dir.second + cury;
                    if(x >= 0 && x < m && y >= 0 && y < n && grid[x][y]==1){
                        rotten.push({x,y});
                        grid[x][y] = 2;
                        fresh--;
                    }
                }
            }
            res++;
            
        }
        if(fresh > 0)
            return -1;
        if(res == -1)
            return 0;
        return res;
    }
};