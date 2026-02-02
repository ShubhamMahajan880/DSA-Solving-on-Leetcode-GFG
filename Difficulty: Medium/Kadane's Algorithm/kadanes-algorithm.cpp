class Solution {
  public:
    long long maxSubarraySum(vector<int> &arr) {
        long long currSum = arr[0];
        long long maxSum = arr[0];

        for(int i = 1; i < arr.size(); i++) {
            currSum = max((long long)arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
