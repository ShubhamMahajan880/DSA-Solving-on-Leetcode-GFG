class Solution {
public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        int n = s.size();

        vector<tuple<int, int, int>> meetings;

        for (int i = 0; i < n; i++) {
            meetings.push_back({f[i], s[i], i + 1});
        }

        sort(meetings.begin(), meetings.end(), [](const auto &a, const auto &b) {
            if (get<0>(a) != get<0>(b))
                return get<0>(a) < get<0>(b);
            return get<2>(a) < get<2>(b);
        });

        vector<int> ans;
        int lastFinish = -1;

        for (auto &[finish, start, index] : meetings) {
            if (start > lastFinish) {
                ans.push_back(index);
                lastFinish = finish;
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};