class Solution {
public:
    int sum = 0;
    
    TreeNode* convertBST(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
    
    void reverseInorder(TreeNode* root){
        if(!root) return;
        
        reverseInorder(root->right);
        
        sum += root->val;
        root->val = sum;
        
        reverseInorder(root->left);
    }
};