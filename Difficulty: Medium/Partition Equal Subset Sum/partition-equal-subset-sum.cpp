class Solution{
public:
    bool equalPartition(vector<int>& arr) {
        
        int n = arr.size();
        int total = 0;
        
        for(int x : arr)
            total += x;
        
        if(total % 2 != 0)
            return false;
        
        int sum = total / 2;
        
        vector<bool> dp(sum+1, false);
        dp[0] = true;
        
        for(int i = 0; i < n; i++){
            for(int s = sum; s >= arr[i]; s--){
                dp[s] = dp[s] || dp[s - arr[i]];
            }
        }
        
        return dp[sum];
    }
};