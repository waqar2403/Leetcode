class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int x =0;int k=1;
       for(int y=1;y<nums.size();y++){
        if(nums[x] == nums[y]){
            continue;
        }
        else{
            x++;
            nums[x] = nums[y];
            k++;
        }
       }
       return k;
    }

};