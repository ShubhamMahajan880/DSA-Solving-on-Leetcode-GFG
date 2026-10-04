class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int positive = 0;
        int negative = 0;
        int answer = 0;

        for (int x : nums) {
            if (x == 0) {
                positive = 0;
                negative = 0;
            } else if (x > 0) {
                positive++;

                if (negative > 0) {
                    negative++;
                }
            } else {
                int oldPositive = positive;
                int oldNegative = negative;

                if (oldNegative > 0) {
                    positive = oldNegative + 1;
                } else {
                    positive = 0;
                }

                negative = oldPositive + 1;
            }

            answer = max(answer, positive);
        }

        return answer;
    }
};