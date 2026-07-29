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
    ListNode* removeElements(ListNode* head, int val) {
                // base case: ran off the end of the list
        if (head == nullptr) {
            return nullptr;
        }
        // trust this call to clean up everything after head
        head->next = removeElements(head->next, val);
        // now THIS node decides: keep myself, or hand back only what's after me
        return head->val == val ? head->next : head;
    }
};