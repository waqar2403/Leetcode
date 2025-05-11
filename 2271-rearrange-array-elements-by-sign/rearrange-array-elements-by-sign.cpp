class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int s= nums.size(); int p=0;int n=1;
        vector<int> res(s);
        for(auto i:nums){
            if(i>0){
                res[p] = i; p +=2;
            }
            else{
                res[n] = i; n +=2; 
            }
        }
        return res;
    }
};