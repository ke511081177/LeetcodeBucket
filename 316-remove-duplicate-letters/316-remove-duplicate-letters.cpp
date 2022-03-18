class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        string res = "";
        vector<int> lastPos(26,-1);
        bool check[26] = {};
        int len = s.size();
        for(int i = 0; i < len; i++)
            lastPos[s[i] - 'a'] = i;
        
        for(int i = 0; i < len; i++){
            if(check[s[i]-'a'] == true)
                continue;
            while(!res.empty() && res.back() > s[i] && lastPos[res.back()-'a'] > i){
                check[res.back()-'a'] = false;
                res.pop_back();
            }
            res.push_back(s[i]);
            check[res.back()-'a'] = true;
        }
        return res;
    }
};