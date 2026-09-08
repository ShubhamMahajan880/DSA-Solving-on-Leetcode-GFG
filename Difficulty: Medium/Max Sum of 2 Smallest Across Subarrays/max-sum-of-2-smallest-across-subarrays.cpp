class Solution {
public:
    int maxSum(vector<int> &arr) {
        int ans = arr[0] + arr[1];

        for (int i = 1; i < arr.size() - 1; i++) {
            ans = max(ans, arr[i] + arr[i + 1]);
        }

        return ans;
    }
};