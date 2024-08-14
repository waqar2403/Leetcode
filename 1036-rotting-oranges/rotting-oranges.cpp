class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> copy = grid;
        queue<pair<int, int>> q;
        int fresh = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (copy[i][j] == 1) {
                    fresh++;
                }
                if (copy[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        if (fresh == 0)
            return 0;
        if (q.empty())
            return -1;
        int minute = -1;
        vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [dx, dy] : dirs) {
                    int i = x + dx;
                    int new_j = y + dy;
                    if (i >= 0 && i < m && new_j >= 0 && new_j < n &&
                        copy[i][new_j] == 1) {
                        copy[i][new_j] = 2;
                        fresh--;
                        q.push({i, new_j});
                    }
                }
            }
            minute++;
        }
        if (fresh == 0)
            return minute;
        return -1;
    }
};
