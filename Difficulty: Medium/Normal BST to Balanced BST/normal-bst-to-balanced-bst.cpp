class Solution {
public:
void inorder(Node* root, vector<int>& v) {
if (root == NULL) return;
inorder(root->left, v);
v.push_back(root->data);
inorder(root->right, v);
}

Node* build(vector<int>& v, int l, int r) {
if (l > r) return NULL;
int m = (l + r) / 2;
Node* root = new Node(v[m]);
root->left = build(v, l, m - 1);
root->right = build(v, m + 1, r);
return root;
}

Node* balanceBST(Node* root) {
vector<int> v;
inorder(root, v);
return build(v, 0, v.size() - 1);
}
};
