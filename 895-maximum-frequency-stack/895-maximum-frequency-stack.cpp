class FreqStack {
public:
    priority_queue<pair<int,pair<int,int>>> q;
    unordered_map<int,int> mp;
    int pos = 0;
    
    FreqStack() {
        
    }
    
    void push(int val) {
        
        q.push(make_pair(++mp[val],make_pair(pos++, val)));
    }
    
    int pop() {
        auto temp = q.top();
        q.pop();
        
        int res = temp.second.second;
        mp[res]--;
        return res;
            
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */