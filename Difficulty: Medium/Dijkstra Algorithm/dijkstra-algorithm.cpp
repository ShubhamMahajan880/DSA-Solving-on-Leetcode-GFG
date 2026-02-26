class Solution
{
	public:
	
	vector<int> dijkstra(int V, vector<vector<int>>& edges, int S)
	{
	    vector<vector<pair<int,int>>> adj(V);
	    
	    for(int i = 0; i < edges.size(); i++) {
	        int u = edges[i][0];
	        int v = edges[i][1];
	        int w = edges[i][2];
	        
	        adj[u].push_back({v, w});
	        adj[v].push_back({u, w});
	    }
	    
	    vector<int> dist(V, INT_MAX);
	    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	    
	    dist[S] = 0;
	    pq.push({0, S});
	    
	    while(!pq.empty()) {
	        int d = pq.top().first;
	        int node = pq.top().second;
	        pq.pop();
	        
	        if(d > dist[node]) continue;
	        
	        for(auto &it : adj[node]) {
	            int adjNode = it.first;
	            int weight = it.second;
	            
	            if(dist[node] + weight < dist[adjNode]) {
	                dist[adjNode] = dist[node] + weight;
	                pq.push({dist[adjNode], adjNode});
	            }
	        }
	    }
	    
	    return dist;
	}
};