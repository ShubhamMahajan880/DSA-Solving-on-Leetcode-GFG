class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(n, 0);

        for (int x : arr) {
            freq[x - 1]++;
        }

        return freq;
    }
};
