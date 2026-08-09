class Solution {
public:
    int count = 0;
    int ans = -1;

    void reverseInorder(Node* root, int k) {
        if(root == NULL || count >= k)
            return;

        reverseInorder(root->right, k);

        count++;

        if(count == k) {
            ans = root->data;
            return;
        }

        reverseInorder(root->left, k);
    }

    int kthLargest(Node* root, int k) {
        count = 0;
        ans = -1;

        reverseInorder(root, k);

        return ans;
    }
};