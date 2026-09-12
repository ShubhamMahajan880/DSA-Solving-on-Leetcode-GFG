class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);

        for (auto &p : pre) {
            int course = p[0];
            int prerequisite = p[1];

            adj[prerequisite].push_back(course);
            indegree[course]++;
        }

        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        int completed = 0;

        while (!q.empty()) {
            int course = q.front();
            q.pop();
            completed++;

            for (int next : adj[course]) {
                indegree[next]--;

                if (indegree[next] == 0)
                    q.push(next);
            }
        }

        return completed == n;
    }
};