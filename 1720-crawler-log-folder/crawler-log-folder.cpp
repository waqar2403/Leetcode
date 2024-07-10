class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;
        int depth = 0;
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i] == "./") {
                continue;
            } else if (logs[i] == "../") {
                if (depth > 0) {
                    depth--;
                }
                cout << logs[i];
            } else {
                depth++;
                cout << logs[i];
            }
        }
        return (depth < 0) ? 0 : depth;
    }
};