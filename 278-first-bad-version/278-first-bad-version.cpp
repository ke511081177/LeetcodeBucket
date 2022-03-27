// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long i = 1, j = n;
        while(i <= j){
            long long mid = (i+j)/2;
            if(!isBadVersion(mid-1) && isBadVersion(mid))
                return mid;
            else if(!isBadVersion(mid))
                i = mid+1;
            else
                j = mid-1;
            
                
        }
        return n;
    }
};