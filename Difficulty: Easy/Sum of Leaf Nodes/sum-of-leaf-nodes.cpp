class Solution {
public:
    int leafSum(Node* root) {
        if(root == NULL)
            return 0;

        if(root->left == NULL && root->right == NULL)
            return root->data;

        return leafSum(root->left) + leafSum(root->right);
    }
};