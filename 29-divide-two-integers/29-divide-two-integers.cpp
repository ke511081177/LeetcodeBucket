class Solution {
public:
    int divide(int A, int B) {
        
        int res = 0, sign = A > 0 == B > 0 ? 1 : -1;
        if (B == -2147483648) 
            return A == B;
        if (A == -2147483648)
            if (B == 1) 
                return -2147483648;
            else if (B == -1) 
                return 2147483647;
            else A += abs(B), res++;
        
        A = abs(A), B = abs(B);
        
        int i = 0;
        while( A >= B) {
            while (A >> i >= B) 
                i++;
            A -= B << i - 1;
            res += 1 << i - 1;
            i = 0;
        }
        return sign < 0 ? -res : res;
    }
};