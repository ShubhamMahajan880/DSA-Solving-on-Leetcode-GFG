class Solution {
public:
    vector<vector<int>> ans;

    void dfs(Node* root, vector<int>& path) {
        if(!root) return;

        path.push_back(root->data);

        if(!root->left && !root->right) {
            ans.push_back(path);
        } else {
            dfs(root->left, path);
            dfs(root->right, path);
        }

        path.pop_back();
    }

    vector<vector<int>> Paths(Node* root) {
        vector<int> path;
        dfs(root, path);
        return ans;
    }
};