class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Find the middle node.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // For odd-length lists, skip the middle node.
        if (fast != nullptr) {
            slow = slow->next;
        }

        // Reverse the second half.
        ListNode* prev = nullptr;
        while (slow != nullptr) {
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Compare both halves.
        while (prev != nullptr) {
            if (head->val != prev->val) {
                return false;
            }
            head = head->next;
            prev = prev->next;
        }

        return true;
    }
};