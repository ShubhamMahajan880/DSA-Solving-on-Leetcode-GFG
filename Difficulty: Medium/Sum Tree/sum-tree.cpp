class Solution {
public:
    pair<bool,int> solve(Node* root) {
        if(!root)
            return {true, 0};

        if(!root->left && !root->right)
            return {true, root->data};

        auto left = solve(root->left);
        auto right = solve(root->right);

        bool ok = left.first && right.first &&
                  (root->data == left.second + right.second);

        return {ok, left.second + right.second + root->data};
    }

    bool isSumTree(Node* root) {
        return solve(root).first;
    }
};