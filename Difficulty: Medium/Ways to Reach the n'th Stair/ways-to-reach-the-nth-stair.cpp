class Solution {
public:
    long long countWays(int n) {
        if(n <= 1) return 1;
        
        long long prev2 = 1;
        long long prev1 = 1;
        
        for(int i = 2; i <= n; i++){
            long long curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
};