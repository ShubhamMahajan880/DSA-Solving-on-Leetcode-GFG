class Solution {
public:
    int solve(Node* root, int num) {
        if(!root)
            return 0;

        num = num * 10 + root->data;

        if(!root->left && !root->right)
            return num;

        return solve(root->left, num) + solve(root->right, num);
    }

    int treePathsSum(Node *root) {
        return solve(root, 0);
    }
};