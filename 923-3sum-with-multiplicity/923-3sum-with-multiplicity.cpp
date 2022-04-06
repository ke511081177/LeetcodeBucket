class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());
        int mod = 1e9 + 7;
        long long res = 0, len = arr.size();
        vector<int> vec;
        unordered_map<int,long> map;
        for(auto n:arr){
            map[n]++;
        }
        cout <<map[0] * (map[0] - 1) * (map[0] - 2) / 6<< endl;
        for(int i = 0; i < len-2; i++){
            // if(arr[i] > 0) 
            //     break;
            if (i > 0 and arr[i] == arr[i-1]) 
                continue;
            
            int j = i+1, k = len-1;
   
            while( j < k){
                int sum = arr[i] + arr[j] + arr[k];
                
                
                if( sum > target)
                    k--;
                else if( sum < target)
                    j++;
                else{
                    
                    if (arr[i] == arr[j] && arr[j] == arr[k])
                        res += map[arr[i]] * (map[arr[i]] - 1) * (map[arr[i]] - 2) / 6;
                    else if (arr[i] == arr[j] && arr[j] != arr[k])
                        res += map[arr[i]] * (map[arr[i]] - 1) / 2 * map[arr[k]];
                    else if (arr[i] != arr[j] && arr[j] == arr[k])
                        res += map[arr[j]] * (map[arr[j]] - 1) / 2 * map[arr[i]];
                    else if (arr[i] < arr[j] && arr[j] < arr[k])
                        res += map[arr[i]] * map[arr[j]] * map[arr[k]];
                    
                    cout << res << endl;
                    int tempJ = j, tempK = k;
                    while(j<k && arr[j] == arr[tempJ])
                        j++;
                    while(j<k && arr[k] == arr[tempK])
                        k--;
                    
                }
            }
            
        }
        return res % mod;
    }
};