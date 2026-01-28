class Solution {
  public:
    bool isPalindrome(int n) {
        int original = n;
        int r = 0;
        while(n)
        {
        r = r*10+n%10;
        n/=10;    
        }
        
        if(r == original)
        return true;
        
        return false;
    }
    
};