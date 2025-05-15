class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i<n-1;i++){
        if(nums[i] == nums[i+1]){
            nums[i] *= 2;
            nums[i+1] =0;
        }
       }
       vector<int> res(n); int l=0;int r =n-1;
       for(int i=0;i<n;i++){
        if(nums[i] != 0){
            res[l] = nums[i];
            l++;
        }
        else{
            res[r] = 0;r--;
        }
       }
       return res; 
    }
};