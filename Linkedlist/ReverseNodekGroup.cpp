class Solution {
public:
    ListNode* reverseLinkedList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    ListNode* kthNode(ListNode* temp, int k) {
        k--;

        while (temp != NULL && k > 0) {
            temp = temp->next;
            k--;
        }

        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;

        while (temp != NULL) {

            ListNode* kNode = kthNode(temp, k);

            if (kNode == NULL) {
                if (prevNode != NULL)
                    prevNode->next = temp;
                break;
            }

            ListNode* nextNode = kNode->next;
            kNode->next = NULL;

            ListNode* newHead = reverseLinkedList(temp);

            if (temp == head) {
                head = newHead;
            } else {
                prevNode->next = newHead;
            }

            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }
};