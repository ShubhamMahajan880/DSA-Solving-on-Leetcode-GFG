class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {
        long long sum = 0;
        long long bestSum = -1;

        int start = 0;
        int bestStart = -1;
        int bestEnd = -1;

        for (int i = 0; i <= arr.size(); i++) {
            if (i < arr.size() && arr[i] >= 0) {
                sum += arr[i];
            } else {
                if (start < i && (sum > bestSum ||
                    (sum == bestSum && i - start > bestEnd - bestStart + 1) ||
                    (sum == bestSum && i - start == bestEnd - bestStart + 1 && start < bestStart))) {
                    bestSum = sum;
                    bestStart = start;
                    bestEnd = i - 1;
                }

                start = i + 1;
                sum = 0;
            }
        }

        if (bestStart == -1)
            return {-1};

        return vector<int>(arr.begin() + bestStart, arr.begin() + bestEnd + 1);
    }
};