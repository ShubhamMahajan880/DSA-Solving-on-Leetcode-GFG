class Solution {
public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();

        int d1 = arr[1] - arr[0];
        int d2 = arr[n - 1] - arr[n - 2];

        int diff;

        if (n == 2) {
            diff = d1;
            return arr[n - 1] + diff;
        }

        if (d1 == d2) {
            diff = d1;
        } else if (abs(d1) < abs(d2)) {
            diff = d1;
        } else {
            diff = d2;
        }

        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int expected = arr[0] + mid * diff;

            if (arr[mid] == expected) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (low < n)
            return arr[0] + low * diff;

        return arr[n - 1] + diff;
    }
};