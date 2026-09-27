class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xr = 0;

        for (int x : nums)
            xr ^= x;

        int diff = xr ^ k;
        int ans = 0;

        while (diff > 0) {
            ans += diff & 1;
            diff >>= 1;
        }

        return ans;
    }
};