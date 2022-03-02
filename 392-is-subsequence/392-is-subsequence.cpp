class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.size() == 0) return true;
        if(t.size() == 0) return false;
        
        int i = 0;
        
        for(auto c:t){
            if(s[i] == c)
                i++;
           
            if(i ==  s.size())
                return true;
        }
        return false;
    }
};