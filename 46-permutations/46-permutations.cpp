class Solution {
public:
    vector<vector<int>> res;
    
    void recursive(vector<int>& nums, int idx){
        
        int len = nums.size();
        if(idx == len){
            res.push_back(nums);
            return;
        }
        
        for(int i = idx; i<len; i++){
            swap(nums[idx],nums[i]);
            recursive(nums, idx+1);
            swap(nums[idx],nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        recursive(nums,0);
        return res;
    }
};