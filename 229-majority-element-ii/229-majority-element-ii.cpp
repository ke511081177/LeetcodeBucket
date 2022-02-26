class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // Boyer–Moore majority vote algorithm
        // This is two-pass algo.
        // pass1:  Evey voter can vote to one candidate. And choose two winner
        // pass2:  Evey voter vote to those two candiate or vote null. And check if those pass 1/3 threshold or not.
        // Time/Space complexity: O(N), O(1)
        // Have a good day.
        
        vector<int> res;
        int len = nums.size();
        int m1 = -1, m2 = -1;
        int vote1 = 0, vote2 = 0;
        
        for(auto &c:nums){                //pass1
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
        
        for(auto &c:nums){                         //pass1
            if(m1 == c) vote1++;
            else if(m2 == c) vote2++;
        }
        
        if(vote1 > (len/3)) res.push_back(m1);
        if(vote2 > (len/3)) res.push_back(m2);
        
        return res;
    }
};