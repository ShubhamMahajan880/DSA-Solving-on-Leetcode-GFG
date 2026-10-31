class Solution {
private:
    vector<vector<string>> result;
    vector<string> current;
    vector<vector<bool>> isPalindrome;

    void backtrack(const string& s, int start) {
        if (start == s.size()) {
            result.push_back(current);
            return;
        }

        for (int end = start; end < s.size(); end++) {
            if (!isPalindrome[start][end]) {
                continue;
            }

            current.push_back(s.substr(start, end - start + 1));
            backtrack(s, end + 1);
            current.pop_back();
        }
    }

public:
    vector<vector<string>> partition(string s) {
        int n = s.size();

        result.clear();
        current.clear();
        isPalindrome.assign(n, vector<bool>(n, false));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] &&
                    (j - i <= 2 || isPalindrome[i + 1][j - 1])) {
                    isPalindrome[i][j] = true;
                }
            }
        }

        backtrack(s, 0);
        return result;
    }
};