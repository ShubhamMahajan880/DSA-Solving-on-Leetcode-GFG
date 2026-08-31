class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int currMax = arr[0];
        int currMin = arr[0];
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int x = arr[i];

            int tempMax = max({x, x * currMax, x * currMin});
            int tempMin = min({x, x * currMax, x * currMin});

            currMax = tempMax;
            currMin = tempMin;

            ans = max(ans, currMax);
        }

        return ans;
    }
};