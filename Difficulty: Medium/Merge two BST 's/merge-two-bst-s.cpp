class Solution{
public:
    void inorder(Node* root, vector<int>& arr){
        if(!root) return;
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    vector<int> merge(Node *root1, Node *root2){
        vector<int> a, b;
        
        inorder(root1, a);
        inorder(root2, b);
        
        vector<int> ans;
        
        int i = 0, j = 0;
        
        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]) ans.push_back(a[i++]);
            else ans.push_back(b[j++]);
        }
        
        while(i < a.size()) ans.push_back(a[i++]);
        while(j < b.size()) ans.push_back(b[j++]);
        
        return ans;
    }
};