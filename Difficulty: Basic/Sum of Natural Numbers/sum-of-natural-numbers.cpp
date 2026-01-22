class Solution {
  public:
    int findSum(int n) {
        if(n==0)
        {
            return 0;
        }
        int sum = (n*(n+1)/2);
        return sum;
    }
};