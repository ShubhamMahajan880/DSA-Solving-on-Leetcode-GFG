class Solution {
public:
    int isSumProperty(Node *root) {
        if(!root || (!root->left && !root->right))
            return 1;

        int sum = 0;

        if(root->left)
            sum += root->left->data;

        if(root->right)
            sum += root->right->data;

        return (root->data == sum) &&
               isSumProperty(root->left) &&
               isSumProperty(root->right);
    }
};