class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        
        for (auto& g : guards) {
            grid[g[0]][g[1]] = 1;
        }
        for (auto& w : walls) {
            grid[w[0]][w[1]] = 2;
        }
        for (auto& g : guards) {
            int i = g[0], j = g[1];
            for (int x = i - 1; x >= 0; x--) {
                if (grid[x][j] == 1 || grid[x][j] == 2) break;
                grid[x][j] = -1;
            }
            for (int x = i + 1; x < m; x++) {
                if (grid[x][j] == 1 || grid[x][j] == 2) break;
                grid[x][j] = -1;
            }
            for (int y = j - 1; y >= 0; y--) {
                if (grid[i][y] == 1 || grid[i][y] == 2) break;
                grid[i][y] = -1;
            }
            for (int y = j + 1; y < n; y++) {
                if (grid[i][y] == 1 || grid[i][y] == 2) break;
                grid[i][y] = -1;
            }
        }
        int unguardedCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unguardedCount++;
                }
            }
        }

        return unguardedCount;
    }
};