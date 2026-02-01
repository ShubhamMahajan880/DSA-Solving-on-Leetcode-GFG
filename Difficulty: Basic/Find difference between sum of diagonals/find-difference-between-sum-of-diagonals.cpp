class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i = 0; i < N; i++) {
            sum1 += Grid[i][i];
            sum2 += Grid[i][N - i - 1];
        }
        
        return abs(sum1 - sum2);
    }
};
