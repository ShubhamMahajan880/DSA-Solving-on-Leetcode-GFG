class Solution {
public:
    int maxLength(vector<int>& arr) {
        unordered_map<long long, int> first;

        long long sum = 0;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if (sum == 0) {
                ans = i + 1;
            }

            if (first.find(sum) != first.end()) {
                ans = max(ans, i - first[sum]);
            } else {
                first[sum] = i;
            }
        }

        return ans;
    }
};