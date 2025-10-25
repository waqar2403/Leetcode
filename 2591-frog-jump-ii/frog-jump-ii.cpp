class Solution {
public:
    int maxJump(vector<int>& stones) {
        int maxi = abs(stones[0]-stones[1]);
        int n = stones.size();
        for(int i=0;i<n;i+=2){
            if(i-2<0) continue;
            maxi = max(maxi, abs(stones[i]-stones[i-2]));
        }
        for(int i=1;i<n;i+=2){
            if(i-2<0) continue;
            maxi = max(maxi, abs(stones[i]-stones[i-2]));
        }
        return maxi;
    }
};