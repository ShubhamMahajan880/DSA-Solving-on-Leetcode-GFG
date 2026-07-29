class Solution {
public:
    Node* prev = NULL;
    Node* head = NULL;

    void inorder(Node* root) {
        if(root == NULL)
            return;

        inorder(root->left);

        if(prev == NULL)
            head = root;
        else {
            prev->right = root;
            root->left = prev;
        }

        prev = root;

        inorder(root->right);
    }

    Node* treeToDLL(Node* root) {
        prev = NULL;
        head = NULL;

        inorder(root);

        return head;
    }
};
