class Solution {
public:
    int minDifference(vector<int>& arr) {
        
        int n = arr.size();
        int total = 0;
        
        for(int x : arr)
            total += x;
        
        int sum = total / 2;
        
        vector<bool> dp(sum+1, false);
        dp[0] = true;
        
        for(int i = 0; i < n; i++){
            for(int s = sum; s >= arr[i]; s--){
                dp[s] = dp[s] || dp[s - arr[i]];
            }
        }
        
        int best = 0;
        for(int s = sum; s >= 0; s--){
            if(dp[s]) {
                best = s;
                break;
            }
        }
        
        return total - 2 * best;
    }
};