class Solution {
public:
    
    int findTheLongestSubstring(string s) {
        
        unordered_map<int, int> m{{0, -1}};
        int res = 0, n = s.length(), mask = 0;
        for (int i = 0; i < n; i++) {
            mask ^= (1 << string("aeiou").find(s[i]) + 1) >> 1;
         
            if (!m.count(mask)) m[mask] = i;
         
            res = max(res, i - m[mask]);
        }
        return res;
    }
};