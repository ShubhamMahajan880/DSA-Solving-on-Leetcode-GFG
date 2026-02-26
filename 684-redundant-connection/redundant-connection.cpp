class Solution {
public:
    vector<int> parent, rank;

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    bool unionSet(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);

        if (pu == pv)
            return false;

        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if (rank[pv] < rank[pu]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rank[pu]++;
        }

        return true;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();
        parent.resize(n + 1);
        rank.resize(n + 1, 0);

        for (int i = 0; i <= n; i++)
            parent[i] = i;

        for (auto& e : edges) {
            if (!unionSet(e[0], e[1]))
                return e;
        }

        return {};
    }
};