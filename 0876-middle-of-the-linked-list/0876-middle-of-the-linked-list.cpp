class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* current = head;

        while (current != nullptr) {
            length++;
            current = current->next;
        }

        current = head;
        for (int i = 0; i < length / 2; i++) {
            current = current->next;
        }

        return current;
    }
};