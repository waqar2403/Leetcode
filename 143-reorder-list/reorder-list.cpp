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
    void reorderList(ListNode* head) {
        if (!head) return;

        // Store values in a vector
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int l = 0;
        int r = v.size() - 1;
        temp = head;
        int n = v.size();
        
        // Assign values back to the list nodes in the required order
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                temp->val = v[l++];
            } else {
                temp->val = v[r--];
            }
            temp = temp->next;
        }
    }
};
