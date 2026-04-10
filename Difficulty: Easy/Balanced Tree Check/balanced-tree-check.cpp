class Solution {
  public:
    bool isBalanced(Node *root) {
        return check(root) != -1;
    }
    
    int check(Node* node){
        if(!node) return 0;
        
        int lh = check(node->left);
        if(lh == -1) return -1;
        
        int rh = check(node->right);
        if(rh == -1) return -1;
        
        if(abs(lh - rh) > 1) return -1;
        
        return 1 + max(lh, rh);
    }
};