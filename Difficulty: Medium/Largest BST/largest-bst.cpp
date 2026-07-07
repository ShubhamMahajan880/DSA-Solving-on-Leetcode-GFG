class Info {
public:
    int size;
    int minVal;
    int maxVal;
    bool isBST;

    Info(int s, int mn, int mx, bool bst) {
        size = s;
        minVal = mn;
        maxVal = mx;
        isBST = bst;
    }
};

class Solution {
public:
    Info solve(Node* root, int &ans) {
        if(root == NULL)
            return Info(0, INT_MAX, INT_MIN, true);

        Info left = solve(root->left, ans);
        Info right = solve(root->right, ans);

        if(left.isBST && right.isBST &&
           root->data > left.maxVal &&
           root->data < right.minVal) {

            int sz = left.size + right.size + 1;
            ans = max(ans, sz);

            return Info(
                sz,
                min(root->data, left.minVal),
                max(root->data, right.maxVal),
                true
            );
        }

        return Info(0, INT_MIN, INT_MAX, false);
    }

    int largestBst(Node *root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};