class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> st;

        for (int x : arr)
            st.insert(x);

        int ans = 0;

        for (int x : arr) {
            if (st.find(x - 1) == st.end()) {
                int current = x;
                int count = 0;

                while (st.find(current) != st.end()) {
                    current++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};