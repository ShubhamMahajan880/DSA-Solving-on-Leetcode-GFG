class Solution {
public:
    long long count(vector<int>& coins, int sum) {
        
        vector<unsigned long long> dp(sum + 1, 0);
        dp[0] = 1;
        
        for(int i = 0; i < coins.size(); i++) {
            for(int s = coins[i]; s <= sum; s++) {
                dp[s] += dp[s - coins[i]];
            }
        }
        
        return dp[sum];
    }
};