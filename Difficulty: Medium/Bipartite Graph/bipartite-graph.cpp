class Solution {
public:
    
    bool isBipartite(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);
        
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> color(V, -1);
        
        for(int i = 0; i < V; i++){
            
            if(color[i] == -1){
                
                queue<int> q;
                q.push(i);
                color[i] = 0;
                
                while(!q.empty()){
                    
                    int node = q.front();
                    q.pop();
                    
                    for(int nei : adj[node]){
                        
                        if(color[nei] == -1){
                            color[nei] = 1 - color[node];
                            q.push(nei);
                        }
                        else if(color[nei] == color[node]){
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};