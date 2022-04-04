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
    ListNode* swapNodes(ListNode* head, int k) {
        if( !head || !head->next) return head;
        
        ListNode *trace = head, *swapFront, * swapBack = head;
        
        while(--k)
            trace = trace->next;
        
        swapFront = trace;
        trace = trace->next;
        while(trace){
            trace = trace->next;
            swapBack = swapBack->next;
        }
        
        int temp = swapFront->val;
        swapFront->val = swapBack->val;
        swapBack->val = temp;
        
        
       
    
        
        
        
        return head;
    }
};