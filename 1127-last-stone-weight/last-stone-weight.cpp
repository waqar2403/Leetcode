class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()> 1){
            int a = stones.back(); stones.pop_back();
            int b = stones.back(); stones.pop_back();

            if(a != b) stones.push_back(a-b);
            sort(stones.begin(),stones.end());
        }
        return stones.empty()? 0: stones[0];
    }
};