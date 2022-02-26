class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int len = nums.size();
        int res = nums[0], vote = 1;
        
        for(int i = 1; i < len; i++){
            
            if(nums[i] == res)vote++;
            else vote--;
            if(vote == 0){
                res = nums[i];
                vote = 1;
            }
        }
        return res;
    }
};