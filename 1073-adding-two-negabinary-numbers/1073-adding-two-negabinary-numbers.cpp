class Solution {
public:
    vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        
        int len1 = arr1.size()-1, len2 = arr2.size()-1;
        int carry = 0;
        vector<int> res;
        while(len1 >= 0|| len2 >= 0 || carry){
            
            if(len1 >= 0)
                carry += arr1[len1--];
            if(len2 >= 0)
                carry += arr2[len2--];
            
            res.push_back(carry&1);
            carry = -(carry >> 1);
            
        }
        
        while(res.size() > 1 && res.back() == 0)
            res.pop_back();
        
        reverse(res.begin(),res.end());
        return res;
        
        
    }
};