class Solution {
public:
    string multiply(string nums1, string nums2) {
        
        if( nums1 == "0" || nums2 == "0")
            return "0";
        
        vector<int> res(nums1.size()+nums2.size(), 0);
        
        for(int i = nums1.size()-1; i >= 0; i--){
            for(int j = nums2.size()-1; j >= 0; j--){
                res[i+j+1] += (nums1[i]-'0')*(nums2[j]-'0');
                res[i+j] += res[i+j+1]/10;
                res[i+j+1] %= 10;
            }
        }
        
        // reverse(res.begin(),res.end());
        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);
        
        return ans;
    }
};