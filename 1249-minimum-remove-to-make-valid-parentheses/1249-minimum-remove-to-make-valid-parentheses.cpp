class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int> st;
        int len =s.size();
        string res = "";

        for(int i = 0; i < len; i++){
         
            if(s[i] == '(')
                st.push(i);
            
            else if(s[i] == ')' ){
                if(!st.empty())
                    st.pop();
                else
                    s[i] = '!';
            }

        }
        while(!st.empty()){
            s[st.top()] = '!';
            st.pop();
        }
        for(int i = 0; i < len; i++){
            if(s[i] != '!')
                res.push_back(s[i]);
        }
        return res;
    }
};