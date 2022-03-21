class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        int len = s.size();
        vector<int> lastPos(26,0);
        
        for(int i = 0; i < len; i++)
            lastPos[s[i]-'a'] = i;
        
        int minPart = -1, partLen = 0;
        
        for(int i = 0; i < len; i++){
            int locLast = lastPos[s[i]-'a'];
            partLen++;
            minPart = max(minPart,locLast);
            
            if( i == minPart){
                res.push_back(partLen);
                partLen = 0;
                // minPart = -1;
            }
        }
        return res;
    }
};