class Solution {
public:

    vector<string> res;
    
    void recursive(string digits, int i, string com,unordered_map<int,vector<char>> umap){
        if(i == digits.size()){
            res.push_back(com);
            return;
        }
        for(auto digit:umap[digits[i]]){
            com.push_back(digit);
            recursive(digits, i+1, com, umap);
            com.pop_back();
        }
            
    }
    vector<string> letterCombinations(string digits) {
        
        unordered_map<int,vector<char>> umap;
        umap['2'] = {'a','b','c'}; 
        umap['3'] = {'d','e','f'};
        umap['4'] = {'g','h','i'};
        umap['5'] = {'j','k','l'};
        umap['6'] = {'m','n','o'};
        umap['7'] = {'p','q','r','s'};
        umap['8'] = {'t','u','v'};
        umap['9'] = {'w','x','y','z'};
        
        if(digits == "")
            return res;
        
        string com = "";
        recursive(digits, 0, com, umap);
        return res;
        
        
        
        
        
    }
};