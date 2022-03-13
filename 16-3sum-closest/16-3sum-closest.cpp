class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        long res = INT_MAX;
        int len = nums.size();
        
        for(int i = 0; i < len-2; i++){
            int j = i+1, k = len-1;
            
            while(j < k){
                long temp = nums[i]+nums[j]+nums[k];
  
                if(abs(target- temp) < abs(target - res))
                    res = temp;
                if(temp > target)
                    k--;
                else if(temp < target)
                    j++;
                else
                    return res;
                
            }
            
        }
        return res;
    }
};