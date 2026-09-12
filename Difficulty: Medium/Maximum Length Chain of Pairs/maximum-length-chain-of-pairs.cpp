class Solution {
public:
    int maxChainLen(vector<vector<int>> &arr) {
        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int count = 0;
        int lastEnd = INT_MIN;

        for (auto &p : arr) {
            if (p[0] > lastEnd) {
                count++;
                lastEnd = p[1];
            }
        }

        return count;
    }
};