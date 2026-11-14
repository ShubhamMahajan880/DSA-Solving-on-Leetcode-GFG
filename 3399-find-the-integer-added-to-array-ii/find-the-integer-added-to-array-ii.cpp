class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int answer = INT_MAX;

        // At most two elements can be removed.
        // Therefore, the first retained element must
        // be among the first three elements of nums1.
        for (int i = 0; i < 3; i++) {
            int x = nums2[0] - nums1[i];

            int p1 = i;
            int p2 = 0;
            int removed = i;

            while (p1 < nums1.size() && p2 < nums2.size()) {
                if (nums1[p1] + x == nums2[p2]) {
                    p1++;
                    p2++;
                } else {
                    p1++;
                    removed++;
                }

                if (removed > 2) {
                    break;
                }
            }

            if (p2 == nums2.size() && removed <= 2) {
                answer = min(answer, x);
            }
        }

        return answer;
    }
};