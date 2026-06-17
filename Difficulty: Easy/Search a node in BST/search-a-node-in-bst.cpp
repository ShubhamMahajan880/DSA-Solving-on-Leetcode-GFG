class Solution {
public:
    bool search(Node* root, int x) {
        while(root) {
            if(root->data == x)
                return true;

            if(x < root->data)
                root = root->left;
            else
                root = root->right;
        }

        return false;
    }
};