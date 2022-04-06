class Solution {
public:
    
    
    void recur(string cur , int idx, string s, vector<string>& res){
        
        if(idx == s.size()){
            res.push_back(cur);
            return;
        }
        if(isdigit(s[idx])){ 
            cur.push_back(s[idx]);
            recur(cur,idx+1,s,res);
        }
        else{ 
            string c1=cur;
            c1.push_back(tolower(s[idx]));
            recur(c1,idx+1,s,res);
            
            
            string c2=cur;
            c2.push_back(toupper(s[idx]));
            recur(c2,idx+1,s,res);
        }
        
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        recur("",0,s,res);
        return res;
    }
};