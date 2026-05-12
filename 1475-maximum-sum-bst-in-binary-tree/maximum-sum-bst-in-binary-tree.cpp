class Info {
public:
    int minVal;
    int maxVal;
    int sum;
    bool isBST;

    Info(int mn, int mx, int s, bool bst) {
        minVal = mn;
        maxVal = mx;
        sum = s;
        isBST = bst;
    }
};

class Solution {
public:
    int ans = 0;

    Info solve(TreeNode* root) {
        if (!root) {
            return Info(INT_MAX, INT_MIN, 0, true);
        }

        Info left = solve(root->left);
        Info right = solve(root->right);

        if (left.isBST && right.isBST && root->val > left.maxVal &&
            root->val < right.minVal) {

            int currSum = left.sum + right.sum + root->val;

            ans = max(ans, currSum);

            return Info(min(root->val, left.minVal),
                        max(root->val, right.maxVal), currSum, true);
        }

        return Info(INT_MIN, INT_MAX, 0, false);
    }

    int maxSumBST(TreeNode* root) {
        solve(root);
        return ans;
    }
};