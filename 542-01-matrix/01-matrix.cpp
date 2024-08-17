class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        vector<vector<int>> vtd(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        
        // Start BFS from all 0s and mark them as visited.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vtd[i][j] = 1;
                    ans[i][j] = 0;
                }
            }
        }
        
        // BFS to calculate the minimum distance to the nearest 0
        int delrow[4] = {-1, 0, +1, 0};
        int delcol[4] = {0, +1, 0, -1};
        
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                // Check if the new cell is within bounds and not visited
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vtd[nrow][ncol]) {
                    vtd[nrow][ncol] = 1;
                    ans[nrow][ncol] = steps + 1;
                    q.push({{nrow, ncol}, steps + 1});
                }
            }
        }
        
        return ans;
    }
};