class Solution {
public:
    int maxWidth(Node* root) {
        if (root == nullptr)
            return 0;

        queue<Node*> q;
        q.push(root);

        int ans = 0;

        while (!q.empty()) {
            int size = q.size();
            ans = max(ans, size);

            while (size--) {
                Node* node = q.front();
                q.pop();

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
        }

        return ans;
    }
};