class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> res;
        int len = nums.size();
        int m1 = -1, m2 = -1;
        int vote1 = 0, vote2 = 0;
        
        for(auto c:nums){
            if(m1 == c) vote1++;
            else if(m2 == c) vote2++;
            
            else if(vote1 == 0){
                m1 = c;
                vote1++;
            }
            else if(vote2 == 0){
                m2 = c;
                vote2++;
            }
            else{
                vote1--;
                vote2--;
            }
        }
        
        vote1 = 0;
        vote2 = 0;
        
        for(auto c:nums){
            if(m1 == c) vote1++;
            else if(m2 == c) vote2++;
        }
        
        if(vote1 > (len/3)) res.push_back(m1);
        if(vote2 > (len/3)) res.push_back(m2);
        
        return res;
        
        
    }
};