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
    ListNode* reverse(ListNode* cur){
        
        ListNode *pre, *nex;
        
        while(cur){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sum;
        ListNode* res = new ListNode(0);
        ListNode* r = res;
        int carry = 0;
        
        while( l1 && l2){
            ListNode *temp = new ListNode(l1->val + l2->val + carry);
            
            if(temp->val >= 10){
                
                temp->val -= 10;
                carry = 1;
            }
            else
                carry = 0;
            
            res->next = temp;
            res = res->next;
            l1 = l1->next;
            l2 = l2->next;
            
        }
        
        while(l1){
            
            ListNode *temp = new ListNode(l1->val + carry);
            if(temp->val >= 10){
                temp->val -= 10;
                carry = 1;
            }
            else
                carry = 0;
            res->next = temp;
            res = res->next;
            l1 = l1->next;
        }
        
        while(l2){
            ListNode *temp = new ListNode(l2->val + carry);
            if(temp->val >= 10){
                temp->val -= 10;
                carry = 1;
            }
            else
                carry = 0;
            res->next = temp;
            res = res->next;
            l2 = l2->next;
        }
        
        if(carry){
            ListNode *temp = new ListNode(carry);
            res->next = temp;
        }
        
        return r->next;
        
    }
};