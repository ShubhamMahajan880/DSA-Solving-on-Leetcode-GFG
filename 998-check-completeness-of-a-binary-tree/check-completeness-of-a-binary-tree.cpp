class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool seenNull = false;
        while (!q.empty()) {
            auto n = q.front();
            q.pop();
            if (!n)
                seenNull = true;
            else {
                if (seenNull)
                    return false;
                q.push(n->left);
                q.push(n->right);
            }
        }
        return true;
    }
};
