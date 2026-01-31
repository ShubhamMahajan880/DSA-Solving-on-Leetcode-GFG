class Solution {
public:
    bool isPalindrome(int x) {

        int actualNumber = x;
        long long r = 0;

        if (x < 0) {
            return false;
        }
        while (x > 0) {
            r = r * 10 + x % 10;
            x /= 10;
        }

        if (actualNumber == r) {
            return true;
        }
        return false;
    }
};