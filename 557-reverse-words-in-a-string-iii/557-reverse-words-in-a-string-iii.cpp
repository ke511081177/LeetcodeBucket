class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string temp = "";
        int i = 0,j =temp.size()-1;
        for(int k = 0; k < s.size(); k++){
            
            if(s[k] == ' '){
                i = 0, j =temp.size()-1;
                while(i < j){
                    char c = temp[i];
                    temp[i++] = temp[j];
                    temp[j--] = c;

                }
                res+=temp+" ";
            
                temp = "";
            }
            else
                temp.push_back(s[k]);
        
        }
        
        i = 0, j =temp.size()-1;
        while(i < j){
            char c = temp[i];
            temp[i++] = temp[j];
            temp[j--] = c;

        }
        res += temp+"";
        return res;
    }
};