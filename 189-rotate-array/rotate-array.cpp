class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
     //   k %= n;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int t = (i+k) % n;
            res[t] = nums[i];
        }
        for(int i=0;i<n;i++){nums[i] = res[i];}
    }
};