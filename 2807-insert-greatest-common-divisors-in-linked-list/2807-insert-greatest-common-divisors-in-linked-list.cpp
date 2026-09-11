class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current = head;

        while (current != nullptr && current->next != nullptr) {
            ListNode* nextNode = current->next;

            int g = std::gcd(current->val, nextNode->val);

            ListNode* newNode = new ListNode(g);

            current->next = newNode;
            newNode->next = nextNode;

            current = nextNode;
        }

        return head;
    }
};