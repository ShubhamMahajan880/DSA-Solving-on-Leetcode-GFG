class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(root, targetSum, path, ans);
        return ans;
    }
    
    void solve(TreeNode* node, int target, vector<int>& path, vector<vector<int>>& ans){
        if(!node) return;
        
        path.push_back(node->val);
        
        if(!node->left && !node->right && target == node->val){
            ans.push_back(path);
        }
        
        solve(node->left, target - node->val, path, ans);
        solve(node->right, target - node->val, path, ans);
        
        path.pop_back();
    }
};