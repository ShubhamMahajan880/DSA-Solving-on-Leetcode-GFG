class Solution {
  public:
    void inorder(Node* root, vector<int>& arr){
        if(!root) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    void fill(Node* root, vector<int>& arr, int &i){
        if(!root) return;
        fill(root->left, arr, i);
        root->data = arr[i++];
        fill(root->right, arr, i);
    }
    
    Node* binaryTreeToBST(Node* root) {
        vector<int> arr;
        inorder(root, arr);
        sort(arr.begin(), arr.end());
        int i = 0;
        fill(root, arr, i);
        return root;
    }
};