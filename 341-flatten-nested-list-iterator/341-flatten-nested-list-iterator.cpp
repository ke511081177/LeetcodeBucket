/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    int idx = 0;
    vector<int> vec;
    void dfs(NestedInteger &nested){
        if(nested.isInteger()){
            vec.push_back(nested.getInteger());
            return;
            }
        vector<NestedInteger> temp = nested.getList();
        for(int i = 0; i < temp.size(); i++){
            dfs(temp[i]);
        }
        return;
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i = 0; i < nestedList.size(); i++){
            dfs(nestedList[i]);
        }
    }
    
    int next() {
        return vec[idx++];
    }
    
    bool hasNext() {
        return idx < vec.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */