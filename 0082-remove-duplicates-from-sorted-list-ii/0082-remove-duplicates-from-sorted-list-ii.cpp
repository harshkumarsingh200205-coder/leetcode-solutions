class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            // Check whether curr is the start of a duplicate group
            if (curr->next && curr->val == curr->next->val) {
                int duplicate = curr->val;

                // Skip all nodes having this value
                while (curr && curr->val == duplicate) {
                    curr = curr->next;
                }

                prev->next = curr;
            } 
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};