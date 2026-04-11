class Solution {
public:
    int ans = -1;

    int dfs(Node* root, int node, int &k) {
        if (root == NULL) return 0;
        if (root->data == node) return 1;

        int left = dfs(root->left, node, k);
        int right = dfs(root->right, node, k);

        if (left || right) {
            k--;
            if (k == 0) ans = root->data;
            return 1;
        }
        return 0;
    }

    int kthAncestor(Node* root, int k, int node) {
        ans = -1;
        dfs(root, node, k);
        return ans;
    }
};


