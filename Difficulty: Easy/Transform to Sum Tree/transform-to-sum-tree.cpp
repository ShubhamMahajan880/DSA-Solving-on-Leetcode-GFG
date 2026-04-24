class Solution {
  public:
    int toSumTree(Node *node){
        if(!node) return 0;
        
        int oldVal = node->data;
        
        node->data = toSumTree(node->left) + toSumTree(node->right);
        
        return node->data + oldVal;
    }
};