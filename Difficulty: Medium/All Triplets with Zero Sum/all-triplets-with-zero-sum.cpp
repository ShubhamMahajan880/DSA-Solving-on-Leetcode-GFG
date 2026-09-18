class Solution {
public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            unordered_map<int, vector<int>> mp;

            for (int j = i + 1; j < n; j++) {
                int required = -(arr[i] + arr[j]);

                if (mp.find(required) != mp.end()) {
                    for (int k : mp[required]) {
                        vector<int> triplet = {i, k, j};
                        sort(triplet.begin(), triplet.end());
                        ans.push_back(triplet);
                    }
                }

                mp[arr[j]].push_back(j);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};