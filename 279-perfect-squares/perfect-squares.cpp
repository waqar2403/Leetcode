#include <bits/stdc++.h>
class Solution {
public:
    int arr[10001];
    int dp (int n){
        if(n == 0){
            return 0;
        }
        if(arr[n] != -1){
            return arr[n];
        }
        int minc = INT_MAX;
        for(int i=1;i*i<=n;i++){
            int res = 1+ dp(n - i*i);
            minc = min(minc, res);
        }
        return arr[n] = minc;
    }
    int numSquares(int n) {
        memset(arr,-1,sizeof(arr));
        return dp(n);
    }
};