class Solution {
  public:
    int maxPathSum(Node* root) {
        int ans = INT_MIN;
        int temp = solve(root, ans);
        
        if(root->left == NULL || root->right == NULL)
            return max(ans, temp);
            
        return ans;
    }
    
    int solve(Node* node, int &ans){
        if(!node) return 0;
        
        if(!node->left && !node->right)
            return node->data;
        
        int left = solve(node->left, ans);
        int right = solve(node->right, ans);
        
        if(node->left && node->right){
            ans = max(ans, left + right + node->data);
            return max(left, right) + node->data;
        }
        
        if(node->left) return left + node->data;
        else return right + node->data;
    }
};