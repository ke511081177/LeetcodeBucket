class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        vector<double> res(101);
        
        res[0] = poured;
        
        for(int i = 1; i <= query_row; i++){
            for(int j = i; j >= 0; j--){
                res[j] = max(0.0, (res[j]-1)/2 );
                res[j+1] += res[j];
            }
        }
        return min(1.0,res[query_glass]);
    }
};