class Solution {
  public:
    string firstRepChar(string s) {
        int first[26];
        for(int i = 0; i < 26; i++)
            first[i] = -1;

        int minSecondIndex = s.size();
        char ans = 0;

        for(int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';

            if(first[idx] == -1) {
                first[idx] = i;
            } else {
                if(i < minSecondIndex) {
                    minSecondIndex = i;
                    ans = s[i];
                }
            }
        }

        if(ans == 0)
            return "-1";

        return string(1, ans);
    }
};
