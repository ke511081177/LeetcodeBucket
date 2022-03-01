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
        
        ListNode* pre = NULL;
        ListNode* current = head;
        ListNode* nex = head;
        
        while(current){
            nex = current->next;
            current->next = pre;
            pre = current;
            current = nex;
        }
        
        return pre;
    }
    
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        ListNode *res = head, *trace = head->next, *pre = head;
        
        
        int gLen = 2;
        while(trace){
            
            ListNode* tail = trace;
            ListNode* nextHead;
            int count = 1;
            while(count < gLen && tail && tail->next){
                tail = tail->next;
                count++;
            }
            nextHead = tail->next;
            if(count%2 == 0){
                tail->next =NULL;
                pre->next = reverseList(trace);
                pre = trace;
                trace->next = nextHead;
                trace = nextHead;
            }
            else{
                pre = tail;
                trace = nextHead;
            }
            gLen++;
            
            
        }
        
        
        return res;
        
    }
};