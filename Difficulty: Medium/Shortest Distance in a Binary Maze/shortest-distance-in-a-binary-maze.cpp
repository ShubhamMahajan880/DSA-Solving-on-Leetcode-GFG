class Solution {
public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        int n = mat.size();
        int m = mat[0].size();

        if (mat[src[0]][src[1]] == 0 || mat[dest[0]][dest[1]] == 0)
            return -1;

        vector<vector<int>> dist(n, vector<int>(m, -1));

        queue<pair<int, int>> q;

        q.push({src[0], src[1]});
        dist[src[0]][src[1]] = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            if (r == dest[0] && c == dest[1])
                return dist[r][c];

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    mat[nr][nc] == 1 && dist[nr][nc] == -1) {

                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }

        return -1;
    }
};