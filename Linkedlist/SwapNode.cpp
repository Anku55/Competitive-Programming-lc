class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr)
            return head;
        vector<int> arr;
        ListNode* temp = head;
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        swap(arr[k - 1], arr[n - k]);
        ListNode* ans = new ListNode(arr[0]);
        ListNode* cur = ans;
        for (int i = 1; i < n; i++) {
            cur->next = new ListNode(arr[i]);
            cur = cur->next;
        }
        return ans;
    }
};