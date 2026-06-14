class Solution {
public:
    int cnt = 0;
    int ans = -1;

    void inorder(Node* root, int k) {
        if(!root || ans != -1) return;

        inorder(root->left, k);

        cnt++;
        if(cnt == k) {
            ans = root->data;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(Node *root, int k) {
        cnt = 0;
        ans = -1;

        inorder(root, k);

        return ans;
    }
};