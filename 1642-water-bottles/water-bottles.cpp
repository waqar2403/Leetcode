class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count =numBottles;
        int remain=numBottles;
        while(remain >= numExchange)
        {
            count += (remain/numExchange);
            remain = (remain/numExchange)+(remain%numExchange);

        }
      return count;
    }
};