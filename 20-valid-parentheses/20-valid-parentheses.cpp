class Solution {
public:
    int convert(char c)
    {
        switch(c)
        {
            case '(':
                return 1;
            case ')':
                return -1;
            case '[':
                return 2;
            case ']':
                return -2;
            case '{':
                return 4;
            case '}':
                return -4;
        }
        return 0;
    };
    bool isValid(string s) {
        vector<int> stack;
        int i = 0;
        for(char c: s)
        {
          
            i = convert(c);
            if(!stack.empty() && i < 0 && stack.back() == -i)
            {
                stack.pop_back();
                
            }
            else
            {
                stack.push_back(i);
            }
        }
        return stack.empty();
    }
};