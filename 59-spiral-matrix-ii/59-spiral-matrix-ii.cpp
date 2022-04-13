class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int left = 0, right = n-1, top = 0, bottom = n-1;
        vector<vector<int>> res(n,vector<int>(n,0));
        int val = 1;
        
        while(left <= right && top <= bottom){
            
            for(int i = left; i <= right; i++)
                res[top][i] = val++;
            
            for(int i = top+1; i <= bottom; i++)
                res[i][right] = val++;
            
            if(left < right && top < bottom){
                
                for(int i = right-1; i > left; i--)
                res[bottom][i] = val++;
            
                for(int i = bottom; i > top; i--)
                    res[i][left] = val++;
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        return res;
    }
};