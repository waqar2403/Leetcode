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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
         vector<int> criticalPoints;
        int index = 0;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = head ? head->next : nullptr;
        while (next != nullptr) {
            if ((prev != nullptr && curr->val > prev->val && curr->val > next->val) ||
                (prev != nullptr && curr->val < prev->val && curr->val < next->val)) {
                criticalPoints.push_back(index);
            }
            prev = curr;
            curr = next;
            next = next->next;
            index++;
        }
        if (criticalPoints.size() < 2) {
            return {-1, -1};
        }
        int minDistance = INT_MAX;
        for (int i = 1; i < criticalPoints.size(); ++i) {
            int distance = criticalPoints[i] - criticalPoints[i - 1];
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
        int maxDistance = criticalPoints.back() - criticalPoints.front();

        return {minDistance, maxDistance};
    }
    
};