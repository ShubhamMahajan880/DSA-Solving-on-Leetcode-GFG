class Solution {
public:
    
    void dfsUtil(int node, vector<vector<int>>& adj,
                 vector<int>& visited, vector<int>& result){
        visited[node] = 1;
        result.push_back(node);
        
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                dfsUtil(neighbour, adj, visited, result);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> visited(V, 0);
        vector<int> result;
        
        dfsUtil(0, adj, visited, result);
        
        return result;
    }
};