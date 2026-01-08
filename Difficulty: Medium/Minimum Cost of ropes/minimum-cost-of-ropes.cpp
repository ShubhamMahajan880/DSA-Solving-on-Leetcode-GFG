class Solution {
public:
long long minCost(vector<int>& a) {
priority_queue<long long, vector<long long>, greater<long long>> pq;
for (int x : a) pq.push(x);
long long cost = 0;
while (pq.size() > 1) {
long long x = pq.top(); pq.pop();
long long y = pq.top(); pq.pop();
cost += x + y;
pq.push(x + y);
}
return cost;
}
};
