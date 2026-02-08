class Solution {
public:
    int count(Node* root){
        if(!root) return 0;
        return 1 + count(root->left) + count(root->right);
    }
    bool isCBT(Node* root, int i, int n){
        if(!root) return true;
        if(i>=n) return false;
        return isCBT(root->left,2*i+1,n) && isCBT(root->right,2*i+2,n);
    }
    bool isMax(Node* root){
        if(!root->left && !root->right) return true;
        if(!root->right) return root->data >= root->left->data && isMax(root->left);
        if(root->data >= root->left->data && root->data >= root->right->data)
            return isMax(root->left) && isMax(root->right);
        return false;
    }
    bool isHeap(Node* tree) {
        int n=count(tree);
        return isCBT(tree,0,n) && isMax(tree);
    }
};
