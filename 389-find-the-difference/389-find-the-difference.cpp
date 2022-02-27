class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char res;
        int lens = s.size();
        
        for(int i = 0; i < lens; i++)
            res += t[i]-s[i];
            
        
        res += t[lens];
        
        return res;
    }
};