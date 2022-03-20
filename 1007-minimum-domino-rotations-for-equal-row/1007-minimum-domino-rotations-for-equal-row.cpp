class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int res1 = INT_MAX, res2 = INT_MAX;
        int count1 = 0, count2 = 0;
        int len = tops.size();
        int nums = tops[0];
        
        for(int i = 0; i < len; i++){
            if(tops[i] != nums && bottoms[i]!= nums)
                res1 = -1;
            if(tops[i] == nums)
                count1++;
            if(bottoms[i] == nums)
                count2++;
    
        }
       
    
        res1 = min(res1, len- count1);
        res1 = min(res1, len- count2);
      
        count1 = 0;
        count2 = 0;
        nums = bottoms[0];
        
        for(int i = 0; i < len; i++){
            if(tops[i] != nums && bottoms[i]!= nums)
                res2 = -1;
            if(tops[i] == nums)
                count1++;
            if(bottoms[i] == nums)
                count2++;
        }
        res2 = min(res2, len - count1);
        res2 = min(res2, len - count2);
        
        return min(res1, res2) > 0 ? min(res1, res2):max(res1, res2);
    }
};