class Solution {
public:
    int inOrderSuccessor(Node* root, Node* x) {
        int ans = -1;

        while(root) {
            if(root->data > x->data) {
                ans = root->data;
                root = root->left;
            } else {
                root = root->right;
            }
        }

        return ans;
    }
};