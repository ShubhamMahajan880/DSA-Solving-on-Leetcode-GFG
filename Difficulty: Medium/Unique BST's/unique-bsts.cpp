class Solution {
public:
    int numTrees(int n) {
        vector<unsigned long long> dp(n + 1);
        dp[0] = dp[1] = 1;

        for(int nodes = 2; nodes <= n; nodes++) {
            dp[nodes] = 0;
            for(int root = 0; root < nodes; root++) {
                dp[nodes] += dp[root] * dp[nodes - root - 1];
            }
        }

        return dp[n];
    }
};