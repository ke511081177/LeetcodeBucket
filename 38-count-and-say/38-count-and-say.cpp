class Solution {
public:
    string countAndSay(int n) {
        
        if(n == 1) return "1";
        if(n == 2) return "11";
        
        string res = "11";
        
        n-= 2;
        
        while(n-- > 0){
            
            string temp = "";
            char digit = res[0];
            
            int len = res.size(), count = 1;
            
            
            for(int i = 1; i < len; i++){
                if(res[i] != digit){
                    temp += to_string(count);
                    temp.push_back(digit);
            
                    digit = res[i];
                    count = 1;
                }
                else
                    count ++;
            }
            
            temp += to_string(count);
            temp.push_back(digit);

            res = temp;
        }
        return res;
    }
};