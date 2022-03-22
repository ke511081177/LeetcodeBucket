class Solution {
    
public:
    void swap(int& a, int& b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    void QuickSort(vector<int>& nums, int front, int end){
        
        if(front >= end) return;
        int i = front;
        
        for(int j = front; j < end; j++){
            
            if(nums[j]<nums[end]){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        swap(nums[i],nums[end]);
        int pivot = i;
        QuickSort(nums,pivot+1,end);
        QuickSort(nums,0,pivot-1);
        
    }
    
    void SelectionSort(vector<int>& nums){
        
        for(int i = 0; i < nums.size();i++){
            int min = i;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] < nums[min])  min = j;
                   
            }
          
            swap(nums[i], nums[min]);
            
        }
    }
    
    void BubbleSort(vector<int>& nums){
        for(int i = 1; i < nums.size(); i++){
            for(int j = i; j > 0; j--){
                if(nums[j] < nums[j-1]) swap(nums[j],nums[j-1]);
            }
        }
    }
    
    void MergeSort(vector<int>& nums,int left,int right){
        if(left < right){
            MergeSort(nums, left, (left+right)/2);
            MergeSort(nums, ((left+right)/2)+1, right);
            merge(nums, left, ((left+right)/2), right);
        }
    }
    void merge(vector<int>& nums,int l,int m,int r){
        vector<int> tmp(r - l + 1);
        int i = l; // index for left subarray
        int j = m + 1; // index for right subarray
        int k = 0; // index for temporary array
        
        while(i <= m && j <= r){
            if(nums[i] <= nums[j]) tmp[k++] = nums[i++]; 
            else tmp[k++] = nums[j++];
        }
        while(i <= m) tmp[k++] = nums[i++];
        while(j <= r) tmp[k++] = nums[j++]; 
        for(i = 0; i < k; i++) nums[l + i] = tmp[i];
                
    }
    
    vector<int> sortArray(vector<int>& nums) {
       
        //QuickSort(nums, 0, nums.size()-1);
        // BubbleSort(nums);
        MergeSort(nums,0, nums.size()-1);
        return nums;
        
        
        
        
    }
};