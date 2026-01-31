class Solution {
  public:
    bool isPalindrome(int n) {
            int actualNumber = n;
            int r = 0;
            while(n!=0)
            {
                r = r*10+n%10;
                n/=10;
            }
            
            if(actualNumber == r)
            {
                return true;
            }
            return false;
    }
    
};