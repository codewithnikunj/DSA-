class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> values;

        while (list1) {
            values.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2) {
            values.push_back(list2->val);
            list2 = list2->next;
        }

        sort(values.begin(), values.end());

        ListNode dummy(0);
        ListNode* tail = &dummy;

        for (int value : values) {
            tail->next = new ListNode(value);
            tail = tail->next;
        }

        return dummy.next;
    }
};