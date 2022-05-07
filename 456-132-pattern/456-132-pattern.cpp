class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int len = nums.size();
        int second = INT_MIN;
        stack<int> st;
        for(int i = len-1; i >= 0; i--){
            
            if(nums[i] < second)
                return true;
            
            while(!st.empty() && nums[i] > st.top()){
                second = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        
        
        return false;
    }
};