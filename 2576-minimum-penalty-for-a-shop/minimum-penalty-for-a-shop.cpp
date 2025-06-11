class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> pre(n+1,0),post(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i]+ (customers[i]=='N');  
        }
        for(int i=n-1;i>=0;i--){
            post[i] = post[i+1]+(customers[i]=='Y');
        }
    n++;
        int mini=1e9;int ans=0;
        for(int i=0;i<n;i++){
            int t= post[i]+pre[i];
            if(t<mini){
                mini =t;
                ans=i;
            }
        }
        return ans;
    }

};