class Solution {
public:
    double myPow(double x, int n) {
        
        double res = 1;
        
        if(n < 0)
            x = 1/x;
        
        
        long nn = labs(n);
        while(nn){
            
            if( nn&1 )
                res*=x;
            x *= x;
            nn >>= 1;
        }
        return res;
    }
};