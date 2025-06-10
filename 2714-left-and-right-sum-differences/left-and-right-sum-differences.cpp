class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> l(n+1),r(n+1),a(n+1);
        for(int i=0;i<=n;i++){
            if(i == 0 ){l[0]= 0;r[n]=0;}
            else{
                l[i] = l[i-1]+nums[i-1];
                r[n-i] = r[(n-i)+1] + nums[n-i+1];
            }
        }
        for(int i=0;i<=n;i++){
            a[i] = abs(l[i]-r[i]);
        }
        return a;
    }
};