class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long res = 0, temp = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            mp[nums[right]]++;
            temp += nums[right];

            if (right - left + 1 > k) {
                temp -= nums[left];
                if (--mp[nums[left]] == 0) mp.erase(nums[left]);
                left++;
            }

            if (right - left + 1 == k && mp.size() == k) {
                res = max(res, temp);
            }
        }
        return res;
    }
};
