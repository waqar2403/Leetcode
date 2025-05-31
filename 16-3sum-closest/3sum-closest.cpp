class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans = INT_MAX/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k = n-1;
            while( j<k ){
            int diff = nums[i]+nums[j]+nums[k];
            if(abs(diff-target) <abs(ans-target)){
                ans =diff;
            }else if(diff < target){
                j++;
            }else if(diff > target){
                k--;
            }else{
                return ans;
            }
            }
        }
        return ans;
    }
};