class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<int> ans(n);

        int mid = (n + 1) / 2;

        int left = 0;
        int right = mid;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                ans[i] = nums[left++];
            else
                ans[i] = nums[right++];
        }

        return ans;
    }
};