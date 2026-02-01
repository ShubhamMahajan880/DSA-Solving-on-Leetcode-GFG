class Solution {
  public:
    string convert(string& s) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z' &&
               (i == 0 || s[i-1] == ' ')) {
                s[i] -= 32;
            }
        }
        return s;
    }
};
