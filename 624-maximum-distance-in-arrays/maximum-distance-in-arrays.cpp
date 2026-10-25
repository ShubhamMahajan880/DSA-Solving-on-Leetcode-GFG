class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minPrev = arrays[0][0];
        int maxPrev = arrays[0].back();
        int ans = 0;

        for (int i = 1; i < arrays.size(); i++) {
            int currMin = arrays[i][0];
            int currMax = arrays[i].back();

            ans = max(ans, max(abs(currMax - minPrev), abs(maxPrev - currMin)));

            minPrev = min(minPrev, currMin);
            maxPrev = max(maxPrev, currMax);
        }

        return ans;
    }
};