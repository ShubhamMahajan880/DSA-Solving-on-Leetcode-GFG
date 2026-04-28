class Solution{
public:
    bool findTarget(Node* root, int X){
        unordered_set<int> s;
        return solve(root, X, s);
    }
    
    bool solve(Node* root, int x, unordered_set<int>& s){
        if(!root) return false;
        
        if(s.count(x - root->data)) return true;
        
        s.insert(root->data);
        
        return solve(root->left, x, s) ||
               solve(root->right, x, s);
    }
};