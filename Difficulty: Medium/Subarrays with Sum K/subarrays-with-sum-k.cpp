class Solution {
public:
    int cntSubarrays(vector<int>& arr, int k) {
        unordered_map<long long, int> freq;
        freq[0] = 1;

        long long prefixSum = 0;
        int ans = 0;

        for (int x : arr) {
            prefixSum += x;

            if (freq.find(prefixSum - k) != freq.end())
                ans += freq[prefixSum - k];

            freq[prefixSum]++;
        }

        return ans;
    }
};