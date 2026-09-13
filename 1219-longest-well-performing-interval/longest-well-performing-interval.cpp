class Solution {
public:
    int longestWPI(vector<int>& hours) {
        unordered_map<int, int> first;
        int prefix = 0;
        int ans = 0;

        first[0] = -1;

        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] > 8)
                prefix++;
            else
                prefix--;

            if (prefix > 0) {
                ans = i + 1;
            } else {
                if (first.find(prefix - 1) != first.end())
                    ans = max(ans, i - first[prefix - 1]);
            }

            if (first.find(prefix) == first.end())
                first[prefix] = i;
        }

        return ans;
    }
};