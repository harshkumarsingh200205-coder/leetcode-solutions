class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;

        // Find kth node from beginning
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Create a gap of k nodes
        ListNode* fast = first;

        // Find kth node from end
        while (fast->next != nullptr) {
            fast = fast->next;
            second = second->next;
        }

        // Swap values
        swap(first->val, second->val);

        return head;
    }
};