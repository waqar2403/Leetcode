class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0; int ans = 0; int cur = 0;
        for(int i=0;i<bank[0].size();i++){
            if(bank[0][i] == '1'){
                prev++;
            }
        }
        for(int i=1;i<bank.size();i++){
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j] == '1'){
                    cur++;
                }
            }
            if(cur ==0){continue;}
            ans += cur*prev;
            prev = cur; cur=0;
        }
        return ans;
    }
};