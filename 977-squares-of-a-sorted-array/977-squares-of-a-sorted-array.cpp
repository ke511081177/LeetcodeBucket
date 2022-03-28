class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int l = 0, r = nums.size()-1, len = nums.size();
        vector<int> res(len);
        for(int i = len-1; i >=0; i--){
            if(abs(nums[r]) < abs(nums[l])) 
                res[i] = nums[l]*nums[l++];
            else
                res[i] = nums[r]*nums[r--];
        }
        return res;
    }
};