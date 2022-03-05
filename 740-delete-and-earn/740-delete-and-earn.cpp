class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int len = 10001;
        vector<int> sum(len, 0);
        vector<int> dp(len, 0);

        for(auto num: nums){
            sum[num] += num;
        }
   
        
        dp[0] = 0;
        dp[1] = sum[1];
        
        for(int i=2; i<len; i++){
            dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
        }

        return dp[len-1];
        
    }
};