class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res = 0;
        
        
        
        while(startValue < target){
            if(target%2)
                target++;
            else
                target /= 2;
            res++;
        }
        return res + startValue - target;
        
    }
};