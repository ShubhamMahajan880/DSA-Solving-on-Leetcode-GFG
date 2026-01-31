class Solution {
  public:
    bool isPalindrome(string& s) {
        int si = 0;
        int ei = s.size() - 1;

        while (si < ei) {
            if (s[si] != s[ei]) {
                return false;
            }
            si++;
            ei--;
        }
        return true;
    }
};
