class Solution {
public:
    vector<int> bfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> visited(V, 0);
        vector<int> result;
        queue<int> q;
        
        q.push(0);
        visited[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            result.push_back(node);
            
            for(int neighbour : adj[node]){
                if(!visited[neighbour]){
                    visited[neighbour] = 1;
                    q.push(neighbour);
                }
            }
        }
        
        return result;
    }
};