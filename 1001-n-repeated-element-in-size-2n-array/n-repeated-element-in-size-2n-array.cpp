class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi = -1;
        int val = 0;
        for(auto p : mp){
            if(p.second > maxi){
                maxi = p.second;
                val = p.first;
            }
        }
        return val;
    }
};