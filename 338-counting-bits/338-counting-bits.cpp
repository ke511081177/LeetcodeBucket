class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> res = {0};
        
    
        for(int i = 1; i <= n; i++){
            
            int temp = i;
            int count = 0;
            while(temp > 0){
                if(temp&&1)
                    count++;
                temp &= temp-1;
                
                
            }
            res.push_back(count);
            count = 0;
        }
        return res;
    }
};