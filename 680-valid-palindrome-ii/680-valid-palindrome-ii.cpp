class Solution {
public:
    bool validPalindrome(string s) {
        
        int left = 0, right = s.size()-1;
        while(left <= right){
            if(s[left] != s[right])
                return check(s,left+1, right) || check(s, left, right-1);
            else{
                left++;
                right--;
            }
            
        }
        return true;
    }
    bool check(string s, int left, int right){
        while(left<=right){
            if(s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};