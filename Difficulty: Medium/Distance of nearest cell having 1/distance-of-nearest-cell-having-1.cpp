class Solution {
public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> dist(n, vector<int>(m, -1));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        
        vector<int> dx = {-1, 0, 1, 0};
        vector<int> dy = {0, 1, 0, -1};
        
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            
            for(int d = 0; d < 4; d++){
                int nx = front.first + dx[d];
                int ny = front.second + dy[d];
                
                if(nx >= 0 && ny >= 0 && nx < n && ny < m && dist[nx][ny] == -1){
                    dist[nx][ny] = dist[front.first][front.second] + 1;
                    q.push({nx, ny});
                }
            }
        }
        
        return dist;
    }
};