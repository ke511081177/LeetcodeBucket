class Solution {
public:
    int hammingDistance(int x, int y) {
        
        x ^= y;
        int res = 0;
        
        while(x){
            res++;
            x &= x-1;
        }
        
        return res;
    }
};