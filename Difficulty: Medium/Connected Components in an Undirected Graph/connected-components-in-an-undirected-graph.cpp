class Solution {
public:
    
    void dfs(int node,
             vector<vector<int>>& adj,
             vector<int>& visited,
             vector<int>& component){
        
        visited[node] = 1;
        component.push_back(node);
        
        for(int nei : adj[node]){
            if(!visited[nei]){
                dfs(nei, adj, visited, component);
            }
        }
    }
    
    vector<vector<int>> getComponents(int V,
                                      vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);
        
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> visited(V, 0);
        vector<vector<int>> result;
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                vector<int> component;
                dfs(i, adj, visited, component);
                result.push_back(component);
            }
        }
        
        return result;
    }
};