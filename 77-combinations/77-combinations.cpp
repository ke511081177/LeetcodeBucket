class Solution {
public:
    vector<vector<int>> res;
    void recursive(vector<int> cur, int idx,int n, int k){
        if(cur.size() == k){
            res.push_back(cur);
            return;
        }
        
        for(int i = idx; i <= n; i++){
            cur.push_back(i);
            recursive(cur, i+1, n, k);
            cur.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> vec;
        recursive(vec, 1 , n ,k);
        return res;
    }
};