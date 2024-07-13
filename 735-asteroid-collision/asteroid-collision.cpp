class Solution {
public:
    public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                bool destroyed = false;
                while (!st.empty() && st.top() > 0) {
                    if (st.top() < -asteroids[i]) {
                        st.pop(); // Destroy the positive asteroid in the stack
                    } else if (st.top() == -asteroids[i]) {
                        st.pop(); // Both asteroids are destroyed
                        destroyed = true;
                        break;
                    } else {
                        destroyed = true; // The negative asteroid is destroyed
                        break;
                    }
                }
                if (!destroyed) {
                    st.push(asteroids[i]);
                }
            }
        }

        // Transfer remaining asteroids in the stack to the result vector
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end()); // Reverse to maintain order
        return result;
    }
};