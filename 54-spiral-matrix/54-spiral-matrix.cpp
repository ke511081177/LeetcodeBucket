class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int r=matrix.size(),c=matrix[0].size();
        int low=0,front=c-1,high=r-1,back=0;
        int t=r*c;
        vector<int> spiral;
        
        while(high>=low){
            for(int i=back;i<=front;i++){
                spiral.push_back(matrix[low][i]);
                t--;
            }
            low++;
            if(t==0)break;
            for(int i=low;i<=high;i++){
                spiral.push_back(matrix[i][front]);
                t--;
            }
            front--;
            if(t==0)break;
            for(int i=front;i>=back;i--){
                spiral.push_back(matrix[high][i]);
                t--;
            }
            high--;
            if(t==0)break;
            for(int i=high;i>=low;i--){
                spiral.push_back(matrix[i][back]);
                t--;
            }
            back++;
            if(t==0)break;
        }
        return spiral;
        
    }
};