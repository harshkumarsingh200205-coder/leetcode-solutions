class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        int n = 1;
        ListNode* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            n++;
        }

        k = k % n;

        if (k == 0)
            return head;

        // Make the list circular
        tail->next = head;

        // Find new tail
        int steps = n - k - 1;
        ListNode* newTail = head;

        for (int i = 0; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = nullptr;

        return newHead;
    }
};