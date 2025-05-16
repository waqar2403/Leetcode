class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> res;
        int c = k;
        for (int i = 0; i < n ; i++) {
            while (c >= 0) {
                if ((i - c) >= 0 && abs((i) - (i - c)) <= k &&
                    nums[i - c] == key) {
                    if (find(res.begin(), res.end(), i) == res.end()) {
                        res.push_back(i );
                    }
                }
                if ((i + c) < n && abs((i) - (i + c)) <= k &&
                    nums[i + c] == key) {
                    if (find(res.begin(), res.end(), i) == res.end()) {
                        res.push_back(i);
                    }
                }
                c--;
            }
            c=k;
        }
        sort(res.begin(), res.end());
        return res;
    }
};