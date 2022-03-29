class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size() == 1 || nums.size() == 0)
            return;
        
        int idx;
        for(idx = 0; idx < nums.size(); idx++){
            if(nums[idx] == 0)
                break;
        }
      
        for(int i = 0; i < nums.size(); i++){
          
             
            if(nums[i] != 0 && idx < i){
                swap(nums[i],nums[idx]);
                for(;idx < nums.size(); idx++)
                    if(nums[idx] == 0)
                        break;
            }
                
        }
        
    }
};