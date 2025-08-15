class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        if(n==0){return res;}

        for(int i=1;i<=n;i++){
            res[i]  = __builtin_popcount(i);
        }
        return res;
    }
};