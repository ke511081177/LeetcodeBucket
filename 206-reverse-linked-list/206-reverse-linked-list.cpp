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
    
    ListNode* reverseList(ListNode* head) {
        
        if(!head or head->next == NULL) return head;
        
        ListNode *nexx , *current = head, *pre = nullptr;
        
        while(current!=NULL){
            nexx = current->next;
            current->next = pre;
            pre = current;
            current = nexx;
        }
 
        return pre;
    }
};