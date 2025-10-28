class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        if(n ==1) {return 2;}
        vector<int> pre(n,0);
        vector<int> post(n,0);
        pre[0] = nums[0];post[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            pre[i] = nums[i] + pre[i-1];
        }
        for(int i=n-2;i>=0;i--){
            post[i] = nums[i] + post[i+1];
        }

        int ans =0;
        for(int i=0;i<n;i++){
            if (nums[i] ==0){
            if(abs(pre[i]-post[i]) == 0){
                ans = ans+2;
            }
            else if (abs(pre[i]-post[i]) == 1){
                ans++;
            }
            }
        }
        return ans;
    }
};