class Solution {
public:
    
    void dfs(int i, int j, int n, int m,
             vector<vector<int>>& mat,
             vector<int>& path,
             vector<vector<int>>& ans) {
        
        path.push_back(mat[i][j]);
        
        if(i == n - 1 && j == m - 1) {
            ans.push_back(path);
        } 
        else {
            if(i + 1 < n)
                dfs(i + 1, j, n, m, mat, path, ans);
            
            if(j + 1 < m)
                dfs(i, j + 1, n, m, mat, path, ans);
        }
        
        path.pop_back();
    }
    
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>>& mat) {
        
        vector<vector<int>> ans;
        vector<int> path;
        
        dfs(0, 0, n, m, mat, path, ans);
        
        return ans;
    }
};