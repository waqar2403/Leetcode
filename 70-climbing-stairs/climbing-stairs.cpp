class Solution {
public:
    int climbStairs(int n) {
    if(n==2) return 2;
    if(n==1) return 1;
    vector<int> dp(n+1); dp[1] = 1; dp[2]=2;
    for(int i=3;i<=n;i++){
        for(int j=1;j<=2;j++){
            if(j<=i){
                dp[i] = dp[i]+dp[i-j];
            }
        }
    }
    return dp[n];
    }
};