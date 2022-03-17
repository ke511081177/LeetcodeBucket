class Solution {
public:
    vector<vector<int>> res;

    void recursive(vector<int> nums, int idx){
        
        int len = nums.size();
        
        if(idx == len){
            res.push_back(nums);
            return;
        }
        
        for(int i = idx; i<len; i++){
            if (i != idx && nums[i] == nums[idx]) 
                continue;
         
            swap(nums[i], nums[idx]);
            recursive(nums, idx+1);
            
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        recursive(nums, 0);
        return res;
        
    }
};