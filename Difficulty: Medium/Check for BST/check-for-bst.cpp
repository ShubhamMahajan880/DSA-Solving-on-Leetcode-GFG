class Solution {
public:
bool solve(Node* root, long long minv, long long maxv) {
if (root == NULL) return true;
if (root->data <= minv || root->data >= maxv) return false;
return solve(root->left, minv, root->data) &&
solve(root->right, root->data, maxv);
}

bool isBST(Node* root) {
return solve(root, LLONG_MIN, LLONG_MAX);
}
};
