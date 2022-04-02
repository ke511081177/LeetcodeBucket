class Solution {
public:
    int res = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
 		int m = grid[0].size();
        int res = 0;
 		vector<vector<bool>>visit(n, vector<bool>(m, false));
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 if(grid[i][j]==1 and !visit[i][j])
                 {
                     res=max(res,dfs(grid,visit,i,j,n,m));
                 }
            }
        }
        
        return res;
    }
    int dfs(vector<vector<int>>& grid,vector<vector<bool>>& visit,int i,int j,int n,int m){
        
        if( i < 0 || j < 0 || i >= n || j >= m || visit[i][j] == true || grid[i][j] == 0)
            return 0;
        
        visit[i][j] = true;
        return 1+dfs(grid, visit, i-1, j, n, m)+dfs(grid, visit, i, j+1, n, m)+dfs(grid, visit, i+1, j, n, m)+dfs(grid, visit, i, j-1, n, m);
    }
};