class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n1 = nums1.size()-1; int n2 = nums2.size()-1;
        int m1 = nums1[n1][0]; int m2 = nums2[n2][0];
        unordered_map<int,int> mp1,mp2;
        for(auto a : nums1) mp1[a[0]] = a[1];
        for(auto a:nums2) mp2[a[0]] = a[1];
        vector<vector<int>> res;
        int maax = max(m1,m2);
        for(int i=1;i<=maax;i++){
            if((mp1.find(i) != mp1.end()) && (mp2.find(i) != mp2.end())){
                int te = mp1[i]+mp2[i];
                vector<int> t = {i,te};
                res.push_back(t);
            }
            else if (mp1.find(i) != mp1.end()){
                vector<int> t = {i,mp1[i]};
                res.push_back(t);
            }
             else if (mp2.find(i) != mp2.end()){
                vector<int> t = {i,mp2[i]};
                res.push_back(t);
            }
        }
        return res;
    }
};