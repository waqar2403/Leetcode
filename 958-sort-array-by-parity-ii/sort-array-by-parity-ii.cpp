class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n= nums.size(); int e = 0; int o= 1;
        vector<int> res(n);
        for(auto i:nums){
            if(i%2 == 0){
                res[e] = i; e += 2;
            }
            else{
                res[o] = i; o += 2;
            }
        }
        return res;
    }
};