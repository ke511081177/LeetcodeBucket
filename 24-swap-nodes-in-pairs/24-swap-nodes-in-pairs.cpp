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
    ListNode* swapPairs(ListNode* head) {
        
//         ListNode* trace = new ListNode(0);
//         trace->next = head;
//         head = trace;
        
//         while(trace->next && trace->next->next){
//             ListNode* pre = trace;
//             ListNode* cur1 = trace->next;
//             ListNode* cur2 = trace->next->next;
//             ListNode* nexx = trace->next->next->next;
            
//             cur2->next = cur1;
//             cur1->next = nexx;
//             pre->next = cur2;
//             trace = trace->next->next;
//         }
        
        if(!head || !head->next)return head;
        
        ListNode* temp = head->next;
        head->next = swapPairs(head->next->next);
        temp->next = head;
        
    
        
        return temp;
    }
};