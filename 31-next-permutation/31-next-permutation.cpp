class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int idx = -1;
        for(int i = nums.size()-1; i > 0; i--){
            if(nums[i] > nums[i-1]){
                idx = i-1;
                break;
            }
        }
        if (idx < 0){
        reverse(nums.begin(), nums.end());
        return;
        }
        
        for (int i = nums.size() - 1; i >= 0; i--){
        
        if (nums[i] > nums[idx]){
            swap(nums[idx], nums[i]);
            reverse(nums.begin() + idx + 1, nums.end());
            break;
            }
        }

    }
};