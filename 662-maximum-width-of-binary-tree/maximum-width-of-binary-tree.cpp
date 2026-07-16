class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;

        unsigned long long ans = 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int sz = q.size();

            unsigned long long minPos = q.front().second;
            unsigned long long first = 0, last = 0;

            for (int i = 0; i < sz; i++) {
                auto curr = q.front();
                q.pop();

                unsigned long long idx = curr.second - minPos;

                if (i == 0)
                    first = idx;
                if (i == sz - 1)
                    last = idx;

                if (curr.first->left)
                    q.push({curr.first->left, 2 * idx + 1});

                if (curr.first->right)
                    q.push({curr.first->right, 2 * idx + 2});
            }

            ans = max(ans, last - first + 1);
        }

        return (int)ans;
    }
};