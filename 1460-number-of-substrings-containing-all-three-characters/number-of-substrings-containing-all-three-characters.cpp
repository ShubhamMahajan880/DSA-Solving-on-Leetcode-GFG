class Solution {
public:
    int numberOfSubstrings(string s) {
        int last[3] = {-1, -1, -1};
        long long ans = 0;

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;

            int earliest = min(last[0], min(last[1], last[2]));

            if (earliest != -1)
                ans += earliest + 1;
        }

        return (int)ans;
    }
};