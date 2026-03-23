class Solution {
public:
    void solve(int i, int j, vector<vector<int>>& mat, int n, string path, vector<string>& ans, vector<vector<int>>& vis){
        if(i == n-1 && j == n-1){
            ans.push_back(path);
            return;
        }
        
        string dir = "DLRU";
        int di[] = {1, 0, 0, -1};
        int dj[] = {0, -1, 1, 0};
        
        for(int k = 0; k < 4; k++){
            int ni = i + di[k];
            int nj = j + dj[k];
            
            if(ni>=0 && nj>=0 && ni<n && nj<n && !vis[ni][nj] && mat[ni][nj]==1){
                vis[i][j] = 1;
                solve(ni, nj, mat, n, path + dir[k], ans, vis);
                vis[i][j] = 0;
            }
        }
    }
    
    vector<string> ratInMaze(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        
        if(mat[0][0] == 0) return ans;
        
        solve(0, 0, mat, n, "", ans, vis);
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};