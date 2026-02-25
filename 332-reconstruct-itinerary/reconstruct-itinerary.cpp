class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        map<string, multiset<string>> mp;
        for (int i = 0; i < tickets.size(); i++) {
            mp[tickets[i][0]].insert(tickets[i][1]);
        }

        vector<string> route;
        dfs("JFK", mp, route);
        reverse(route.begin(), route.end());
        return route;
    }

    void dfs(string src, map<string, multiset<string>>& mp,
             vector<string>& route) {
        while (!mp[src].empty()) {
            string next = *mp[src].begin();
            mp[src].erase(mp[src].begin());
            dfs(next, mp, route);
        }
        route.push_back(src);
    }
};