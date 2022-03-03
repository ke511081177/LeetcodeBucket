class Solution {
public:
    

    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int len = nums.size();
        
        if(len < 3) return 0;
        
        int res = 0;
        int count = 0;
        int gdiff = nums[1] - nums[0];
        
        for(int i = 1; i < len-1; i++){
            
            int cdiff = nums[i+1] - nums[i];
            
            if(cdiff == gdiff)
                count++;
            else{
                count = 0;
                gdiff = cdiff;
            }
            res+= count;
            
        }
        return res;
    }
};