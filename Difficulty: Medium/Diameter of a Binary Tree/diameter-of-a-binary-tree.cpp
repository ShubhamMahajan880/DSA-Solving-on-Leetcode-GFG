class Solution {
public:
    int ans = 0;

    int height(Node* root) {
        if (root == NULL) return -1;
        int lh = height(root->left);
        int rh = height(root->right);
        ans = max(ans, lh + rh + 2);
        return 1 + max(lh, rh);
    }

    int diameter(Node* root) {
        ans = 0;
        height(root);
        return ans;
    }
};
