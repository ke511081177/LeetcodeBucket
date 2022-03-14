class Solution {
public:
    string simplifyPath(string path) {
        
        
        stack<string> s;
        int len =path.size(), i = 1;
        string res = "", temp = "";
        if(path[len-1]!='/') 
            path+="/", ++len;
        
        while(i < len){
           
            if( path[i] != '/')
                temp.push_back(path[i]);
            
            else{
                if(temp == "." || temp ==""){
                    //pass
                }
                    
                
                else if(temp == ".."){
                    if(!s.empty())
                        s.pop();
                    
                }
                else{
                     cout << temp << endl;
                    s.push(temp);
                }
                temp = "";
            }
            
            
            i++;
           
                
        }
        
        while(!s.empty()){
            res = "/"+s.top() + res;
            s.pop();
           
        }
        
        if(res.size() == 0)
            return "/";
            
        return res;
        
        
        
    }
};