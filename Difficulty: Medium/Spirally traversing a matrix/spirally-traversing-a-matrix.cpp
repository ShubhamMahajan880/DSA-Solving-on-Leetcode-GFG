class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> Ans;

        int srow = 0, erow = n - 1;
        int scol = 0, ecol = m - 1;

        while(srow <= erow && scol <= ecol) {

            // top row
            for(int j = scol; j <= ecol; j++)
                Ans.push_back(matrix[srow][j]);
            srow++;

            // right column
            for(int i = srow; i <= erow; i++)
                Ans.push_back(matrix[i][ecol]);
            ecol--;

            // bottom row
            if(srow <= erow) {
                for(int j = ecol; j >= scol; j--)
                    Ans.push_back(matrix[erow][j]);
                erow--;
            }

            // left column
            if(scol <= ecol) {
                for(int i = erow; i >= srow; i--)
                    Ans.push_back(matrix[i][scol]);
                scol++;
            }
        }

        return Ans;
    }
};
