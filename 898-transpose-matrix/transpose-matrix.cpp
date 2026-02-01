class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrixrix) {
        int n = matrixrix.size();
        int m = matrixrix[0].size();

        vector<vector<int>> res(m, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                res[j][i] = matrixrix[i][j];
            }
        }

        return res;
    }
};