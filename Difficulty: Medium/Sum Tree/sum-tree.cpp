class Solution {
public:
    pair<bool,int> solve(Node* root){
        if(root == NULL) return {true, 0};
        
        if(root->left == NULL && root->right == NULL)
            return {true, root->data};
        
        auto left = solve(root->left);
        auto right = solve(root->right);
        
        bool isValid = left.first && right.first && (root->data == left.second + right.second);
        // 
        return {isValid, left.second + right.second + root->data};
    }
    
    bool isSumTree(Node* root) {
        return solve(root).first;
    }
};