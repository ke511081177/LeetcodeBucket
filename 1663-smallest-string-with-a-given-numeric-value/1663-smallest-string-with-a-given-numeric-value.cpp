class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string res = "";
        for(int i = 0; i < n; i++)
            res.push_back('a');
        k-=n;
        if(k == 0)
            return res;
        
        n -= 1;
        while(k !=0){
            if(k <= 25){
                
                res[n] += k;
                k = 0;
            }
            else{
                k -= 25;
                res[n] += 25;
                n--;
            }
                
        }
        return res;
        
    }
};