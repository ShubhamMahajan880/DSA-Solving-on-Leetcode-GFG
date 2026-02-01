class Solution {
  public:
    int findSum(string& s) {
        int sum = 0, num = 0;

        for(char c : s) {
            if(c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
            } else {
                sum += num;
                num = 0;
            }
        }

        return sum + num;
    }
};
