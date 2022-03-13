class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int len = nums.size();
        
        for(int i = 0; i < len-3; i++){
            
            long long sum = nums[i];
            sum +=+ nums[i+1]; 
            sum += nums[i+2];
            sum += nums[i+3];
            
 
            if( (nums[i] > target && target >= 0) || (sum > target)) 
                break;
            
            sum =  nums[i];
            sum += nums[len-1];
            sum += nums[len-2];
            sum += nums[len-3];
            
            if( (i>0 && nums[i]==nums[i-1])|| sum < target)
                continue;
            
            
            for( int j = i+1; j < len-2; j++){
                if( j > i+1 && nums[j]==nums[j-1])
                    continue;
                
                int k = j+1, l = len-1;
              
                while(k < l){
                   
                    long long temp = nums[i];
                    temp += nums[j];
                    temp += nums[k];
                    temp += nums[l];
            
                    if(temp < target)
                        k++;
                    else if(temp > target)
                        l--;
                    
                    else{
                        int tempK = k, tempL = l;
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while( k<l && nums[k]==nums[tempK])
                            k++;
                        while( k<l && nums[l]==nums[tempL] )
                            l--;
                    }
                }
            }
        }
        return res;
    }
};