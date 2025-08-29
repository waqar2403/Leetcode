class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;

        for(auto& p:points){
            int dis = p[0]*p[0] + p[1]*p[1];
            pq.push({dis,{p[0],p[1]}});
        }

        vector<vector<int>> res;
        while(k--){
            auto [dis,c] = pq.top(); pq.pop();
            res.push_back({c.first, c.second});
        }
        return  res;
    }
};