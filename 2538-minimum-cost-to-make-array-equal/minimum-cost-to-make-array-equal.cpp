#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size();
        vector<pair<long long, long long>> numCost(n);

        for (int i = 0; i < n; ++i) {
            numCost[i] = {nums[i], cost[i]};
        }

        // Sort by nums value
        sort(numCost.begin(), numCost.end());

        // Total cost sum
        long long totalCost = 0;
        for (auto& p : numCost) {
            totalCost += p.second;
        }

        // Find the weighted median
        long long cumCost = 0;
        int i = 0;
        while (cumCost < (totalCost + 1) / 2) {
            cumCost += numCost[i].second;
            i++;
        }

        long long target = numCost[i - 1].first;

        // Calculate total cost to make all nums equal to target
        long long result = 0;
        for (int j = 0; j < n; ++j) {
            result += abs((long long)nums[j] - target) * cost[j];
        }

        return result;
    }
};