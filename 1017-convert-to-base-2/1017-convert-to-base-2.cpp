class Solution {
public:
    string baseNeg2(int n) {
        
        string res = "";
        
        while( n!= 0){
            res += to_string(n&1);
            n = -(n>>1);
        }
        
        if(res.size() == 0)
            return "0";
        
        reverse(res.begin(),res.end());
        return res;
    }
};