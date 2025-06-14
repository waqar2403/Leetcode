#include <cmath>
class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
    sort(beans.begin(),beans.end());
    long long n=beans.size(); 
    long long curr=0;
    long long sum = accumulate(beans.begin(),beans.end(),0LL);
    long long ans=sum;

    for(int i=0;i<n;i++){
        long long diff = abs(beans[i]-curr);
        sum -= diff*(n-i);
        ans = min(ans,sum) ;
        sum += beans[i];
        curr = beans[i];
    }
    return ans;
    }
};