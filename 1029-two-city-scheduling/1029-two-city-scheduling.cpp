class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int toA = 0;
        
        int len = costs.size();
        vector<int> diff(len,0);
        
        for(int i = 0; i < len; i++){
            toA+= costs[i][0];
            diff[i] = costs[i][1] - costs[i][0];
        }
        
        sort(diff.begin(),diff.end());
        
        for(int i = 0;i < len/2;i++){
            toA += diff[i];
            
        }
        return toA;
        
    }
};