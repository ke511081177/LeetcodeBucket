class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
        vector<int> res;
        for(int i = 0; i < mat.size(); i++){
            int size = mat[i].size();
            int temp = 0;
            for(int j = 0; j < size; j++){
                
                if(mat[i][j] == 1)
                    temp++;
            }
            q.push(make_pair(temp, i));
           
        }
        // while(!q.empty()){
        //     cout<< q.top().second << endl;
        //     q.pop();
        // }
        for(int i = 0; i < k; i++){
            auto temp = q.top();
            q.pop();
            res.push_back(temp.second);
        }
        return res;
    }
};