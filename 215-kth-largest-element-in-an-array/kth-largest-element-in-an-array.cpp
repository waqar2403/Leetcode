class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> maxq;

    for(int num : nums){
        maxq.push(num);
        if(maxq.size() > k){
            maxq.pop();
        }
    }
        return maxq.top();

    }
};