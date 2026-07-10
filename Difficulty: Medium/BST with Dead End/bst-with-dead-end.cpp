class Solution{
public:
    bool solve(Node* root, int low, int high){
        if(!root) return false;
        
        if(low == high) return true;
        
        return solve(root->left, low, root->data - 1) ||
               solve(root->right, root->data + 1, high);
    }
    
    bool isDeadEnd(Node *root){
        return solve(root,1,INT_MAX);
    }
};