class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> res;
        vector<int> temp;
        int len = nums.size();
        for(int i = 0; i< len; i++){
            if(nums[i]%2 == 0)
                res.push_back(nums[i]);
            else
                temp.push_back(nums[i]);
            
        }
        cout << temp.size() << endl;
        res.insert(res.end(), temp.begin(),temp.end());
        return res;
    }
};