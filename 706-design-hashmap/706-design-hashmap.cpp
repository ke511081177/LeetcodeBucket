class MyHashMap {
public:
    struct ListNode {
         int key;
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x, int y) : key(x), val(y), next(nullptr) {}
         ListNode(int x, int y , ListNode *next) : key(x), val(y), next(next) {}
    };
    
    ListNode* head = new ListNode(-1,-1);
    
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(!head->next){
            ListNode* node = new ListNode(key,value);
            head->next = node;
            return;
        }
        
        ListNode* temp = head;
   
        while(temp->next){
            
            if(temp->next->key == key){
                
                temp->next->val = value;
                return;
            }
            temp = temp->next;
        }
        
        ListNode* node = new ListNode(key,value);
        
        temp->next = node;
        temp = head;
        
        return;
    }
    
    int get(int key) {
        ListNode* temp = head;
        while(temp){
            if(temp->key == key)return temp->val;
            temp = temp->next;
        }
        return -1;
    }
    
    void remove(int key) {
        ListNode* temp = head;
        while(temp->next){
            if(temp->next->key == key){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */