class Solution {
public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;

        int xr = 0;
        long ans = 0;

        for (int num : arr) {
            xr ^= num;

            int required = xr ^ k;

            if (freq.find(required) != freq.end())
                ans += freq[required];

            freq[xr]++;
        }

        return ans;
    }
};