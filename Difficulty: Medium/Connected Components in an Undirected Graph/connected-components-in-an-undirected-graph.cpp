class Solution {
public:
    
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
                queue<int> q;
                
                q.push(i);
                visited[i] = 1;
                
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    
                    component.push_back(node);
                    
                    for(int nei : adj[node]){
                        if(!visited[nei]){
                            visited[nei] = 1;
                            q.push(nei);
                        }
                    }
                }
                
                result.push_back(component);
            }
        }
        
        return result;
    }
};