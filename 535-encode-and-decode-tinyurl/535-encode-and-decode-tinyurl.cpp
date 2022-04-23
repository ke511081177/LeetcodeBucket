class Solution {
public:
    unordered_map<string, string> codeDB, urlDB;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(urlDB.find(longUrl) != urlDB.end())
            return urlDB[longUrl];
        
        string res = "";
        for(int i = 0;  i < 7; i++)
            res += (rand()%62);
        
        while(codeDB.find(res) != codeDB.end()){
            res = "";
            for(int i = 0;  i < 7; i++)
            res += (rand()%62);
        }        
        codeDB[res] = longUrl;
        codeDB[longUrl] = res;
        return res;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return codeDB[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));