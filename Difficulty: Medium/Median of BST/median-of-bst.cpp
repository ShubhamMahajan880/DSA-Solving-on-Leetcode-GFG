class Solution {
  public:
    void inorder(Node* root, vector<int>& arr){
        if(!root) return;
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    int findMedian(Node *root){
        vector<int> arr;
        inorder(root, arr);
        
        int n = arr.size();
        
        return arr[(n - 1) / 2];
    }
};