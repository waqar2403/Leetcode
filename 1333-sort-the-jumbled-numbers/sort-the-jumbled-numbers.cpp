class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int  n = nums.size();
        vector<pair<int,int>> mappednums(n);
        for(int i=0;i<n;i++)
        {
            int digit  = nums[i];
            string mappedstr = "";
            if(digit == 0)
            {
                mappedstr = to_string(mapping[0]);
            }
            else
            {
                while(digit > 0)
                {
                    int num = digit%10;
                    mappedstr = to_string(mapping[num]) + mappedstr;
                    digit /= 10;
                }
            }
            int mappednum = stoi(mappedstr);
            mappednums[i] = {mappednum,i};
        }
        sort(mappednums.begin(),mappednums.end());
        vector<int> sorted;
        for(auto& pair : mappednums)
        {
            sorted.push_back(nums[pair.second]);
        }
        return sorted;
    }
};