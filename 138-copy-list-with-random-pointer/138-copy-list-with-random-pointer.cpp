/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        map<Node*,Node*> res;
        Node* trace = head;
        while(trace){
            res[trace] = new Node(trace->val);
            trace = trace->next;
        }
        trace = head;
        while(trace){
            res[trace]->random = res[trace->random];
            res[trace]->next = res[trace->next];
            trace = trace->next;
        }
        
        return res[head];
    }
};