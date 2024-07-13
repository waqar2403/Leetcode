class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& pos, vector<int>& healths, string directions) {
        int n = pos.size();
        vector<int> survived_healths(n, -1);  // Initialize all to -1 (indicating not survived)
        vector<pair<int, int>> robots;  // Store (position, index) pairs

        // Pair positions with their indices for sorting
        for (int i = 0; i < n; ++i) {
            robots.emplace_back(pos[i], i);
        }

        // Sort robots based on their positions
        sort(robots.begin(), robots.end());

        stack<int> stack;  // Stack to hold indices of robots moving right

        for (auto& [position, idx] : robots) {
            char direction = directions[idx];
            int health = healths[idx];

            if (direction == 'R') {
                stack.push(idx);  // Push the index of the robot moving right
            } else {
                // Process collisions with robots in stack moving right
                while (!stack.empty() && health > 0) {
                    int r_idx = stack.top();
                    if (healths[r_idx] > health) {
                        healths[r_idx] -= 1;
                        health = -1;  // Current left-moving robot is destroyed
                    } else if (healths[r_idx] < health) {
                        stack.pop();
                        health -= 1;
                    } else {
                        health = -1;
                        stack.pop();
                    }
                }
                if (health > 0) {
                    survived_healths[idx] = health;  // Current left-moving robot survives
                }
            }
        }

        // All remaining robots in the stack survived
        while (!stack.empty()) {
            int idx = stack.top();
            stack.pop();
            survived_healths[idx] = healths[idx];
        }

        // Collect surviving healths in the original order
        vector<int> result;
        for (int health : survived_healths) {
            if (health != -1) {
                result.push_back(health);
            }
        }

        return result;
    }
};
