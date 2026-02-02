class Solution {
  public:
    int binaryToDecimal(string &b) {
        int decno = 0;
        int pow = 1;
        
        for(int i = b.size() - 1; i >= 0; i--) {
            decno += (b[i] - '0') * pow;
            pow *= 2;
        }
        return decno;
    }
};
