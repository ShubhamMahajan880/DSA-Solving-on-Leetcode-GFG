class Solution
{
	public:
	
	int spanningTree(int V, vector<vector<int>>& edges)
	{
	    vector<vector<pair<int,int>>> adj(V);
	    
	    for(int i = 0; i < edges.size(); i++) {
	        int u = edges[i][0];
	        int v = edges[i][1];
	        int w = edges[i][2];
	        
	        adj[u].push_back({v, w});
	        adj[v].push_back({u, w});
	    }
	    
	    vector<int> key(V, INT_MAX);
	    vector<int> inMST(V, 0);
	    
	    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	    
	    key[0] = 0;
	    pq.push({0, 0});
	    
	    int sum = 0;
	    
	    while(!pq.empty()) {
	        int weight = pq.top().first;
	        int node = pq.top().second;
	        pq.pop();
	        
	        if(inMST[node]) continue;
	        
	        inMST[node] = 1;
	        sum += weight;
	        
	        for(auto &it : adj[node]) {
	            int adjNode = it.first;
	            int wt = it.second;
	            
	            if(!inMST[adjNode] && wt < key[adjNode]) {
	                key[adjNode] = wt;
	                pq.push({wt, adjNode});
	            }
	        }
	    }
	    
	    return sum;
	}
};