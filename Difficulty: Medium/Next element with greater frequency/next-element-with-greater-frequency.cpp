class Solution {
public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        vector<int> ans(n, -1);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && freq[arr[i]] > freq[arr[st.top()]]) {
                ans[st.top()] = arr[i];
                st.pop();
            }

            st.push(i);
        }

        return ans;
    }
};