class Solution {
public:
    bool divideArray(vector<int>& nums) {
        stack<int> s;
        sort(nums.begin(),nums.end());
        s.push(nums[0]);
        for(int i=1;i<nums.size();i++)
        {

            if(!s.empty() && s.top() == nums[i]  )
            {
                s.pop();
            }
            else
            {
                s.push(nums[i]);
            }
        }
        return s.empty();
    }
};