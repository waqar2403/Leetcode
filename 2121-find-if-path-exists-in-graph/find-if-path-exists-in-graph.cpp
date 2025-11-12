class Solution {
public:
    void dfs(int src, vector<bool>& arr, vector<vector<int>>& graph){
        arr[src] = true;
        vector<int> t = graph[src];
        for(int i:t){
            if(!arr[i]) dfs(i,arr,graph);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(auto &i:edges){
        graph[i[0]].push_back(i[1]);
        graph[i[1]].push_back(i[0]);
        }
        vector<bool> arr(n,false);
        dfs(source,arr,graph);
        return arr[destination];
    }
};