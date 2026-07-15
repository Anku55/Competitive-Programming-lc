using P = pair<int, ListNode*>;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<P, vector<P>, greater<P>> pq;

        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr)
                pq.push({lists[i]->val, lists[i]});
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (!pq.empty()) {

            auto [val, node] = pq.top();
            pq.pop();

            tail->next = node;
            tail = tail->next;

            if (node->next != nullptr) {
                pq.push({node->next->val, node->next});
            }
        }

        return dummy->next;
    }
};