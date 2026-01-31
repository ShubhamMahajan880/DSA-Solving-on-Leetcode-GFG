class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int si = 0, ei = n - 1;

        while (si < ei) {
            int sum = arr[si] + arr[ei];

            if (sum == target) {
                return true;
            }
            else if (sum > target) {
                ei--;
            }
            else {
                si++;
            }
        }
        return false;
    }
};
