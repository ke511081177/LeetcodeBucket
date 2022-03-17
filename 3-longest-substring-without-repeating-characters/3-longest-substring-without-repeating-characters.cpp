class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> check;
        int left = 0, right = 0, res = 0;
        int len = s.size();
        
        while(right < len){
            if(check.count(s[right]) == 0){
                check.insert(s[right]);
                res = max(res,right-left+1);
                right ++;
                
                
            }
            else{
                check.erase(s[left]);
                left++;
            }
        }
        return res;
    }
};