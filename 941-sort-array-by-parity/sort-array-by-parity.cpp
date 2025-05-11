class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size(); int l = 0; int r = n-1;
        vector<int> res(n);
        for(auto i:nums){
            if(i%2 == 0){
                res[l] = i;
                l++;
            }
            else{
                res[r] = i;
                r--;
            }
        }
        return res;
    }
};