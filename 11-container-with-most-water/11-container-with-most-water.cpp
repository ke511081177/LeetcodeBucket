class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right =  height.size()-1;
        int res = 0;
        
        while(left < right){
            int now = (right - left)*min(height[left],height[right]);
            res = max(now,res);
            if(height[left] > height[right]) right--;
            else left++;
        }
        return res;
    }
};