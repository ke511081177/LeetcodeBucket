class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int> record;
        for(auto option:ops){
            if(option == "C"){
                record.pop_back();
            }
            else if(option == "D"){
                int temp = record.back();
                record.push_back(temp*2);
            }
            else if(option == "+"){
                int size = record.size();
                record.push_back(record[size-1]+record[size-2]);
            }
            else{
                record.push_back(stoi(option));
            }
        }
        int res = 0;
        for(auto s:record)
            res += s;
        return res;
    }
};