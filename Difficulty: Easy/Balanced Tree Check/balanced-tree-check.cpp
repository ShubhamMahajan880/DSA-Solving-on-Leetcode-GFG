class Solution {
public:
    int solve(Node* root){
        if(!root) return 0;

        int lh = solve(root->left);
        if(lh == -1) return -1;

        int rh = solve(root->right);
        if(rh == -1) return -1;

        if(abs(lh - rh) > 1) return -1;

        return 1 + max(lh, rh);
    }

    bool isBalanced(Node* root) {
        return solve(root) != -1;
    }
};