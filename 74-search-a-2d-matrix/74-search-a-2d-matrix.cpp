class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 1 && matrix[0].size() == 1)
            return matrix[0][0] == target;
        
        if(matrix[matrix.size()-1][matrix[0].size()-1] < target)
            return false;
        
        int i = 0,j = matrix.size()-1;
        int idx = 0;
        
        while(i<=j && matrix.size() != 1){
            idx = (i+j)/2;
            cout << idx;
            if(matrix[idx][0] == target)
                return true;
            
            if((idx == matrix.size()-1 && matrix[idx][0] < target) || (matrix[idx][0] < target && matrix[idx+1][0] > target))
                break;
        
            if(matrix[idx][0] < target)
                i = idx+1;
            else
                j = idx-1;
            

        }
        
        
     
        i = 0;
        
        j = matrix[idx].size()-1;
        
        while(i <= j){
            int mid = (i+j)/2;
            if(matrix[idx][mid] == target)
                return true;
            else if(matrix[idx][mid] < target)
                i = mid+1;
            else
                j = mid-1;
        }
     
        cout << matrix[idx][0];
        return false;
    }
};