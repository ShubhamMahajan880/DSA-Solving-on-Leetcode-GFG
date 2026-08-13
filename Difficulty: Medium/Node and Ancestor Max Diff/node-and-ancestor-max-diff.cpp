class Solution {
public:
    int ans;

    int solve(Node* root) {
        if(root == NULL)
            return INT_MAX;

        if(root->left == NULL && root->right == NULL)
            return root->data;

        int left = solve(root->left);
        int right = solve(root->right);

        int minimum = min(left, right);

        ans = max(ans, root->data - minimum);

        return min(root->data, minimum);
    }

    int maxDiff(Node* root) {
        ans = INT_MIN;
        solve(root);
        return ans;
    }
};