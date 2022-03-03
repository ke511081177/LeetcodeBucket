class Solution {
public:
    int mySqrt(int x) {
        // Uue Binary Search
        // Have a good good night~
        if(x == 0)return 0;
        
        int left = 0, right = x;
        int res ;
        while(left <= right){
            int mid = (left+right)/2;
        
            if(mid == 0) return 1;
            
            if(mid == x/mid)return mid;
            else if(mid < x/mid)left = mid+1,res = mid;   // because round down rule, change res just in mid < x/mid
            else right = mid-1;
            
            //res = mid;
        }
        return res;
        
    }
};