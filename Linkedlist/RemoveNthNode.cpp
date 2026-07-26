class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        
        if (size == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        
        temp = head;
        int target_prev_index = size - n - 1;
        for (int i = 0; i < target_prev_index; i++) {
            temp = temp->next;
        }
        
        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;
        
        return head;      
    }
};
