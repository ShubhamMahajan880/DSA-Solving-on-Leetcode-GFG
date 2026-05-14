class Solution{
public:
    void inorder(Node* root, vector<int>& v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    void postfill(Node* root, vector<int>& v, int &i){
        if(!root) return;
        postfill(root->left,v,i);
        postfill(root->right,v,i);
        root->data=v[i++];
    }
    void convertToMaxHeapUtil(Node* root){
        vector<int> v;
        inorder(root,v);
        int i=0;
        postfill(root,v,i);
    }
};
