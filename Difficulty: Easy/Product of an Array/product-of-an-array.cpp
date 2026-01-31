class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        int n = arr.size();
        long long int product = 1;
        long long int MOD = 1000000007;
        for(int i =0; i<n;i++)
        {
            product = (product * arr[i])%MOD;
        }
        
        return product;
        
    }
};