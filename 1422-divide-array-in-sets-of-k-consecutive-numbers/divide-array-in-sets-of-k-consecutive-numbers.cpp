class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k != 0)
            return false;

        map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        while (!freq.empty()) {
            int start = freq.begin()->first;

            for (int x = start; x < start + k; x++) {
                if (freq.find(x) == freq.end())
                    return false;

                freq[x]--;

                if (freq[x] == 0)
                    freq.erase(x);
            }
        }

        return true;
    }
};