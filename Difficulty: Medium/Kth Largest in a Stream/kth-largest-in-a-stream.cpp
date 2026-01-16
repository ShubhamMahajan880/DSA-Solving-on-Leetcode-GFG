class Solution {
public:
vector<int> kthLargest(int k, int arr[], int n) {
priority_queue<int, vector<int>, greater<int>> pq;
vector<int> res;

for (int i = 0; i < n; i++) {
pq.push(arr[i]);
if (pq.size() > k) pq.pop();
if (pq.size() < k) res.push_back(-1);
else res.push_back(pq.top());
}
return res;
}
};
