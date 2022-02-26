class Solution {
public:
    
  
    
    int shortestPathLength(vector<vector<int>>& graph) {
        
        queue<vector<int>> q;
        set<pair<int,int>> visited;
        int len = graph.size();
        int res = 0;
        
        if(len == 1) return 0;
        if(len == 2) return 1;
        for(int i = 0; i < len; i++){
            vector<int> temp(3,0);
            temp[0] = i;                // node
            temp[1] = 1<<i;             // mask
            temp[2] = 0;                // ans
            q.push(temp);
            
            visited.insert({i,temp[1]});
        }
        
        
         while(!q.empty()){
            
             vector<int> current = q.front();
             q.pop();
            
             if(current[1] == ((1<<len)-1))
                return current[2];
               
             for(auto c:graph[current[0]]){
                 
                 int travel = current[1] | (1<<c);
                 if(visited.find({c,travel}) == visited.end()){
                     visited.insert({c,travel});
                     vector<int> temp(3,0);
                     
                     temp[0] = c;                // node
                     temp[1] = travel;             // mask
                     temp[2] = current[2]+1;       // ans
                     q.push(temp);
                 }
             }
        
     }
        return 0;
    }
};