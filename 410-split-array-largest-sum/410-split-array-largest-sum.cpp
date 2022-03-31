class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        
        int len = nums.size();
        
        vector<unsigned int> nosplit(len,0);
        vector<vector<unsigned int>> dp(len+1,vector<unsigned int>(m+1,INT_MAX));
        
        nosplit[0] = nums[0];
        for(int i = 1; i < len; i++)
            nosplit[i] = nosplit[i-1]+nums[i];
        
        for(int i = 0; i < len; i++)
            dp[i][1] = nosplit[i];
        
        
        for(int i = 1; i<len; i++){
            for(int j = 2; j <=m; j++){
                for(int k = 0; k <i ; k++){
                    dp[i][j] = min(dp[i][j],max(dp[k][j-1], nosplit[i]-nosplit[k]));
                }
            }
        }
        return dp[len-1][m];   
    }
};