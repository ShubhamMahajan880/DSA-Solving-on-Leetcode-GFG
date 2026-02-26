class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<int> dist(n, 1e9);
        dist[src] = 0;
        
        for(int i = 0; i <= k; i++) {
            vector<int> temp = dist;
            
            for(int j = 0; j < flights.size(); j++) {
                int u = flights[j][0];
                int v = flights[j][1];
                int w = flights[j][2];
                
                if(dist[u] != 1e9 && dist[u] + w < temp[v]) {
                    temp[v] = dist[u] + w;
                }
            }
            
            dist = temp;
        }
        
        if(dist[dst] == 1e9) return -1;
        return dist[dst];
    }
};