class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int originalNumber = x;
        long long r = 0;
        while (x) {
            r = r * 10 + x % 10;
            x /= 10;
        }

        if (r == originalNumber)
            return true;
        return false;
    }
};