/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next) return head;
        
        ListNode *trace = head;
        int len = 0;
        
        while(trace){
            trace = trace->next; 
            len++;
        }
        
        if(k%len == 0) return head;
        
        k = len - (k%len);
        
        
        
        trace = head;
        
        while(k > 1){
            trace = trace->next; 
            k--;
        }
        
        ListNode *tail = trace;
        
        trace = trace->next;
        tail->next = NULL;

        
        ListNode *res = trace;
    
        while(trace->next)
            trace = trace->next;
        
        trace->next = head;
        
        return res;
    }
};