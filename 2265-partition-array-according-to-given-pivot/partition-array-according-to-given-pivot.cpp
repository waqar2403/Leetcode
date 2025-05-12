class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size(); int l=0;int r=n-1;
        vector<int> res(n);
        for(int i=0, j = n-1;i<=n-1;i++,j--){
            if(nums[i] < pivot){
                res[l] =nums[i];
                l++;
            }
            if(nums[j] > pivot){
                res[r] =nums[j]; r--;
            }

        }
        while(l <= r){
            res[l] = pivot;
            l++;
        }
        return res;
    }
};