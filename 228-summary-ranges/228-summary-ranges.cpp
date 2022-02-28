class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        
        
        vector<string> res;
        int len =nums.size();
        
        if(len == 0)return res;
        if(len == 1)return {to_string(nums[0])};
        
        for(int i = 0; i < len; i++){
            string temp = to_string(nums[i]);
            
            while(i < len-1 && nums[i] == nums[i+1]-1)
                i++;
            
            if(temp != to_string(nums[i])){
                temp += "->";
                temp +=  to_string(nums[i]);
                
            }
            
            res.push_back(temp);
        }
        
        return res;
        
    }
};