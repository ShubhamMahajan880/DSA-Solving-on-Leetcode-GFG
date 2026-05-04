class Solution {
  public:
    int inOrderSuccessor(Node* root, Node* x) {
        Node* succ = NULL;
        
        while(root){
            if(x->data < root->data){
                succ = root;
                root = root->left;
            } else {
                root = root->right;
            }
        }
        
        if(succ) return succ->data;
        return -1;
    }
};