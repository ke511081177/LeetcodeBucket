class Solution {
public:
    vector<vector<int>> res;
    
    void recursive(vector<int>& vec, int i, int k, int n){
        if(n < 0 || vec.size() > k)
            return;
        
        if(n == 0 && vec.size() == k){
            res.push_back(vec);
            return;
        }
    
        
        for(int j = i; j <= 9; j++){
            vec.push_back(j);
            recursive(vec, j+1, k, n-j);
            vec.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> vec;
        recursive(vec, 1, k, n);
        
        return res;
        
    }
};