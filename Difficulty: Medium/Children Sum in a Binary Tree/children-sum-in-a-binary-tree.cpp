class Solution {
public:
    int isSumProperty(Node *root) {
        if(root == NULL)
            return 1;

        if(root->left == NULL && root->right == NULL)
            return 1;

        int sum = 0;

        if(root->left)
            sum += root->left->data;

        if(root->right)
            sum += root->right->data;

        if(root->data != sum)
            return 0;

        return isSumProperty(root->left) &&
               isSumProperty(root->right);
    }
};