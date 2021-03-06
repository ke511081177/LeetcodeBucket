class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int res = 0;
        for(auto c:s){
            if(c == '('){
                
                st.push(res);
                res = 0;
            }
            else{
                
                res = st.top() + max(2*res, 1);
                st.pop();
            }
                
        }
        return res;
    }
};