class Solution {
public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        sort(b.begin(), b.end());

        vector<int> ans;

        for (int x : a) {
            int count = upper_bound(b.begin(), b.end(), x) - b.begin();
            ans.push_back(count);
        }

        return ans;
    }
};