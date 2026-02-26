class Solution {
public:
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
        
        vector<vector<int>> adj(V);
        
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> visited(V, 0);
        queue<int> q;
        
        q.push(src);
        visited[src] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            if(node == dest) return true;
            
            for(int nei : adj[node]){
                if(!visited[nei]){
                    visited[nei] = 1;
                    q.push(nei);
                }
            }
        }
        
        return false;
    }
};