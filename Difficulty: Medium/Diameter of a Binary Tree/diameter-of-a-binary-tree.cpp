class Solution {
public:
    int ans = 0;

    int height(Node* root) {
        if (root == nullptr)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        ans = max(ans, left + right);

        return 1 + max(left, right);
    }

    int diameter(Node* root) {
        ans = 0;
        height(root);
        return ans;
    }
};