class Solution {
public:
    int findMin(vector<int>& nums) {
       int left = 0, right = nums.size()-1, middle;

        while(left < right){
            middle = (left + right) / 2;
            if(nums[middle] < nums[right]) right = middle;
            else left = middle + 1;
        }

        return nums[left];
    }
};