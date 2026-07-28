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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // base case: one list ran out, answer is whatever is left
        if (!list1 || !list2) {
            return list1 ? list1 : list2;
        }
        // make sure list1 always points at the smaller head
        if (list1->val > list2->val) {
            swap(list1, list2);
        }
        // trust this call to merge everything else, then attach it
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
};