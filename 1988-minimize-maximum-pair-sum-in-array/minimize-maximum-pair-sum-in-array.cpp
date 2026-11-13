class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        int answer = 0;

        while (left < right) {
            int pairSum = nums[left] + nums[right];

            answer = max(answer, pairSum);

            left++;
            right--;
        }

        return answer;
    }
};