class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int len = nums.size();
        vector<vector<int>> res;
        
 
        
        for(int i = 0; i < len-2; i++){
            if(nums[i] > 0) 
                break;
            if (i > 0 and nums[i] == nums[i-1]) 
                continue;
            
            int j = i+1, k = len-1;
            
            
            
            
            while( j < k){
                int sum = nums[i] + nums[j] + nums[k];
                
                
                if( sum > 0)
                    k--;
                else if( sum < 0)
                    j++;
                else{
                    res.push_back({ nums[i], nums[j], nums[k]});
                    int tempJ = j, tempK = k;
                    while(j<k && nums[j] == nums[tempJ])
                        j++;
                    while(j<k && nums[k] == nums[tempK])
                        k--;
                    }
            }
            
        }
        return res;
    }
};