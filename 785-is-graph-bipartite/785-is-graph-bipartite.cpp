class Solution {
public:
    
    bool dfs(vector<vector<int>>& graph, vector<int> &vis, int i, int color){
        
        if(vis[i] == 0){
            vis[i] = color==2? 2:1;
            for(auto child:graph[i]){
                if(!dfs(graph, vis, child, color==2? 1:2))
                    return false;
            }
        }
        return !color || color == vis[i];
            
        
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int> vis(graph.size(),0);
        for(int i = 0; i < graph.size(); i++){
            if(!dfs(graph, vis, i, vis[i]))
               return false;
        }
        return true;
  
    }
};