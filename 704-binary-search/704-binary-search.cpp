class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if(nums.size() == 1) return nums[0] == target? 0:-1;
        sort(nums.begin(),nums.end());
        
        int i = 0, j = nums.size();
        
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid] > target) j = mid-1;
            else if(nums[mid] < target) i = mid+1;
            else if(nums[mid] == target) return mid;
        }
        return -1;
    }
};