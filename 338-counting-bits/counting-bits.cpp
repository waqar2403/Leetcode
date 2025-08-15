class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        if(n==0){return res;}

        for(int i=1;i<=n;i++){
            if(i%2 ==1){
                res[i] = res[i/2]+1;
            }
            else {
                res[i] = res[i/2];
            }
        }
        return res;
    }
};