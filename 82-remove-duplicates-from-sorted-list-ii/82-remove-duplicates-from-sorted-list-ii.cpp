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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if( head == NULL || head->next == NULL)return head;
        int check;
        check = head->val;
        
        
        
        ListNode* res = new ListNode(0);
        ListNode* r = res;
        ListNode* temp = new ListNode(check);
        
        if(head->val != head->next->val){
            
            res->next = temp;
            res = res->next;
        } 
         ListNode* pre = res;
        
        
        head = head->next;

        while(head != NULL){
            
            if(head->val != check){
                check = head->val;
                ListNode* n = new ListNode(check);
                res->next = n;
                pre = res;
                res = n;
            }
            else{
                res = pre;
                res->next = NULL;
            }
            head = head->next;
            
        }
        return r->next;
    }
};