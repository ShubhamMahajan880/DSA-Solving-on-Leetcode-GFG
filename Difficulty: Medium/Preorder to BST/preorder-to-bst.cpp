class Solution {
public:
    Node* build(vector<int>& arr, int& i, int bound) {
        if(i == arr.size() || arr[i] > bound)
            return NULL;

        Node* root = new Node(arr[i++]);

        root->left = build(arr, i, root->data);
        root->right = build(arr, i, bound);

        return root;
    }

    Node* preToBST(vector<int> &arr) {
        int i = 0;
        return build(arr, i, INT_MAX);
    }
};