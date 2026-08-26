class Solution {
public:
    int countSubarrays(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;

        int odd = 0;
        int ans = 0;

        for (int x : arr) {
            odd += x % 2;

            if (freq.find(odd - k) != freq.end())
                ans += freq[odd - k];

            freq[odd]++;
        }

        return ans;
    }
};