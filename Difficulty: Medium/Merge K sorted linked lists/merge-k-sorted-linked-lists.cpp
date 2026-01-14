class Solution {
public:
Node* mergeKLists(vector<Node*>& v) {
priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq;

for (auto node : v) {
if (node) pq.push({node->data, node});
}

Node dummy(0);
Node* tail = &dummy;

while (!pq.empty()) {
auto p = pq.top(); pq.pop();
tail->next = p.second;
tail = tail->next;
if (p.second->next)
pq.push({p.second->next->data, p.second->next});
}
return dummy.next;
}
};
