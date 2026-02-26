class Solution
{
	public:
	
	vector<int> topoSort(int V, vector<vector<int>>& edges) 
	{
	    vector<vector<int>> adj(V);
	    vector<int> indegree(V, 0);
	    
	    for(int i = 0; i < edges.size(); i++) {
	        int u = edges[i][0];
	        int v = edges[i][1];
	        adj[u].push_back(v);
	        indegree[v]++;
	    }
	    
	    queue<int> q;
	    
	    for(int i = 0; i < V; i++) {
	        if(indegree[i] == 0)
	            q.push(i);
	    }
	    
	    vector<int> topo;
	    
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        
	        topo.push_back(node);
	        
	        for(int v : adj[node]) {
	            indegree[v]--;
	            if(indegree[v] == 0)
	                q.push(v);
	        }
	    }
	    
	    return topo;
	}
};