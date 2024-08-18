class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hash;
        int second;
        for(int i = 0;i<nums.size();i++)
        {
           second = target-nums[i];
           if  (hash.find(second) !=hash.end())
           {
            ans.push_back(i);
            ans.push_back(hash[second]);
            break;
           }
           hash[nums[i]] = i;
        }
        return ans;
    }
};