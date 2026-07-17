class Solution {
public:
    bool solve(Node* a, Node* b) {
        if(!a && !b)
            return true;

        if(!a || !b)
            return false;

        return a->data == b->data &&
               solve(a->left, b->right) &&
               solve(a->right, b->left);
    }

    bool isSymmetric(struct Node* root) {
        if(!root)
            return true;

        return solve(root->left, root->right);
    }
};