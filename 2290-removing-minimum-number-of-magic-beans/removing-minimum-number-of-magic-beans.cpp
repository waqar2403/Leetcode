class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        int n = beans.size();
        
        long long totalSum = 0;
        for (int b : beans)
            totalSum += b;

        long long minRemoval = totalSum;

        for (long long i = 0; i < n; ++i) {
            // Assume beans[i] is the target value
            // All beans[j] where j >= i will be reduced to beans[i]
            // All beans[j] where j < i will be completely removed
            long long removals = totalSum - beans[i] * (n - i);
            minRemoval = min(minRemoval, removals);
        }

        return minRemoval;
    }
};