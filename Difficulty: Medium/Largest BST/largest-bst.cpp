class Info{
public:
    int size;
    int minVal;
    int maxVal;
    bool isBST;
    
    Info(int s, int mn, int mx, bool bst){
        size = s;
        minVal = mn;
        maxVal = mx;
        isBST = bst;
    }
};

class Solution{
public:
    int ans = 0;
    
    Info solve(Node* root){
        if(!root){
            return Info(0, INT_MAX, INT_MIN, true);
        }
        
        Info left = solve(root->left);
        Info right = solve(root->right);
        
        if(left.isBST && right.isBST &&
           root->data > left.maxVal &&
           root->data < right.minVal){
            
            int sz = left.size + right.size + 1;
            
            ans = max(ans, sz);
            
            return Info(
                sz,
                min(root->data, left.minVal),
                max(root->data, right.maxVal),
                true
            );
        }
        
        return Info(0, INT_MIN, INT_MAX, false);
    }
    
    int largestBst(Node *root){
        solve(root);
        return ans;
    }
};