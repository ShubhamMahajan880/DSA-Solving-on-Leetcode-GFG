class Solution {
public:
    int orangesRot(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = grid.size(), m = grid[0].size();
        int fresh = 0, time = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2) q.push({i, j});
                if(grid[i][j] == 1) fresh++;
            }
        }
        
        vector<int> dx = {-1, 0, 1, 0};
        vector<int> dy = {0, 1, 0, -1};
        
        while(!q.empty() && fresh > 0){
            int size = q.size();
            time++;
            
            for(int i = 0; i < size; i++){
                auto front = q.front();
                q.pop();
                
                for(int d = 0; d < 4; d++){
                    int nx = front.first + dx[d];
                    int ny = front.second + dy[d];
                    
                    if(nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1){
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                        fresh--;
                    }
                }
            }
        }
        
        if(fresh > 0) return -1;
        return time;
    }
};