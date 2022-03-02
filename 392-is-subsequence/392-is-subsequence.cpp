class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.size() == 0) return true;
        if(t.size() == 0) return false;
        
        int i = 0, len = s.size();
        
        for(auto c:t){
            if(s[i] == c)
                i++;
           
            if(i == len)
                return true;
        }
        return false;
    }
};