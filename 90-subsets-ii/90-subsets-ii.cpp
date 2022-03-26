class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> res = {{}};
        int len = nums.size();
    

        
        for(int i = 0; i < nums.size(); i++){
            int size = res.size();
            for(int j = 0;j < size; j++){
                vector<int> temp = res[j];
                temp.push_back(nums[i]);
                
                if(find(res.begin(),res.end(),temp) == res.end())
                    res.push_back(temp);
            }
        }
        return res;
    }
};