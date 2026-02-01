class Solution {
  public:
    char nonRepeatingChar(string &s) {
        for(int i = 0; i < s.size(); i++) {
            bool repeat = false;
            for(int j = 0; j < s.size(); j++) {
                if(i != j && s[i] == s[j]) {
                    repeat = true;
                    break;
                }
            }
            if(!repeat)
                return s[i];
        }
        return '$';
    }
};
