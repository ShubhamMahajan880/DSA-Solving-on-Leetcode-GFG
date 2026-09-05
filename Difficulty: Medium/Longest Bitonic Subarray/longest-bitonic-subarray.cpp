class Solution {
public:
    int bitonic(vector<int> &arr) {
        int n = arr.size();

        if (n == 0)
            return 0;

        int ans = 1;
        int start = 0;
        int nextStart = 0;
        int i = 0;

        while (i < n - 1) {
            while (i < n - 1 && arr[i] <= arr[i + 1])
                i++;

            while (i < n - 1 && arr[i] >= arr[i + 1]) {
                if (arr[i] > arr[i + 1])
                    nextStart = i + 1;
                i++;
            }

            ans = max(ans, i - start + 1);
            start = nextStart;
        }

        return ans;
    }
};