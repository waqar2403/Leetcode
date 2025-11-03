/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> ban(nums.begin(), nums.end());
        ListNode dummy(0);
        ListNode* tail = &dummy;

        for (ListNode* cur = head; cur; cur = cur->next) {
            if (!ban.count(cur->val)) {
                tail->next = new ListNode(cur->val);
                tail = tail->next;
            }
        }
        return dummy.next;
    }
};
