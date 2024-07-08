#include <numeric>
#include <vector> // Include necessary header for vector

class Solution {
public:
    int findTheWinner(int n, int k) {
        int c = 0;
        vector<int> vec(n); // Use std::vector
        iota(vec.begin(), vec.end(), 1); // Use std::iota

        while (vec.size() > 1) {
            c = (c + k - 1) % vec.size(); // Calculate correct index, considering wrap-around
            vec.erase(vec.begin() + c); // Erase element at the calculated index
        }

        return vec[0]; // Return the last remaining element
    }
};
