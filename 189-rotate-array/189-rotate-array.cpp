class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp;
        int len = nums.size();
        k %= len;
        if( k == 0 || len/k == 0)return ;
        
        for(int i = k-1; i >= 0; i--){
            temp.push_back(nums[len-i-1]);
      
        }
        for(int i = len-k-1; i >= 0; i-- )
            nums[i+k] = nums[i];
        
        for(int i = 0; i < k; i++)
            nums[i] = temp[i];
        
    }
};