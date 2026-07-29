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
    ListNode* deleteDuplicates(ListNode* head) {
         if (head == nullptr || head->next == nullptr) {
            return head;
        }
        // trust this call to clean up duplicates in everything after head
        head->next = deleteDuplicates(head->next);
        // now compare against what is left, AFTER the smaller problem is solved
        return head->val == head->next->val ? head->next : head;
    }
};