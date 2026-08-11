class Solution {
public:
    int solve(Node* root) {
        if(root == NULL)
            return INT_MIN;

        if(root->left == NULL && root->right == NULL)
            return root->data;

        return root->data + max(solve(root->left), solve(root->right));
    }

    int maxPathSum(Node* root) {
        if(root == NULL)
            return 0;

        return solve(root);
    }
};