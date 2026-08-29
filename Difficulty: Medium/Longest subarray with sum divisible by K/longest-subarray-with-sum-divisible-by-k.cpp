class Solution {
public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        vector<int> first(k, -2);

        first[0] = -1;

        long long sum = 0;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            int rem = sum % k;

            if (rem < 0)
                rem += k;

            if (first[rem] != -2) {
                ans = max(ans, i - first[rem]);
            } else {
                first[rem] = i;
            }
        }

        return ans;
    }
};