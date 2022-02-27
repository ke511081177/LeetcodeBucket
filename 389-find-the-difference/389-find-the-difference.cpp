class Solution {
public:
    char findTheDifference(string s, string t) {
        
        // Use ASCII code concept to solve
        // Have a good day.
        
        char res;
        int lens = s.size();
        
        for(int i = 0; i < lens; i++)
            res += t[i]-s[i];
            
        res += t[lens];
        return res;
    }
};