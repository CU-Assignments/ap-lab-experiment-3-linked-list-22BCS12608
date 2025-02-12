class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; 
        ListNode* next = nullptr; 
        ListNode* current = head;    
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current; 
            current = next; 
        }
        return prev;
    }
};
