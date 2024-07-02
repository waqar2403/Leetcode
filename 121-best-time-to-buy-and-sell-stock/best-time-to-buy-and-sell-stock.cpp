class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if(prices.size() <= 1) return 0;
       int maxp = 0;
       int l=0;
       int r = 1;
       for (int r = 1; r < prices.size(); ++r) {
            if (prices[r] > prices[l]) {
                int prof = prices[r] - prices[l];
                maxp = max(maxp, prof);
            } else {
                l = r;
            }
        }
       return  maxp;
    }
};