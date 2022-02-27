class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char res;
        //int lens = s.size();
        
        for(int i = 0; i < s.size(); i++)
            res += t[i]-s[i];
            
        
        res += t[s.size()];
        
        return res;
    }
};