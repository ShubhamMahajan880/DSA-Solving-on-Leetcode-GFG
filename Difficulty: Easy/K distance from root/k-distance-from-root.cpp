class Solution {
public:
    void dfs(Node* root, int k, vector<int>& ans) {
        if(root == NULL)
            return;

        if(k == 0) {
            ans.push_back(root->data);
            return;
        }

        dfs(root->left, k - 1, ans);
        dfs(root->right, k - 1, ans);
    }

    vector<int> kdistance(int k, Node *root) {
        vector<int> ans;
        dfs(root, k, ans);
        return ans;
    }
};