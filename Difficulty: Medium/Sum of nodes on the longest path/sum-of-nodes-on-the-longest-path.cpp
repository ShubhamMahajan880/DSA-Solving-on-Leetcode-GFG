class Solution{
public:
    void solve(Node* root, int len, int sum, int &maxLen, int &maxSum){
        if(!root){
            if(len > maxLen){
                maxLen = len;
                maxSum = sum;
            }
            else if(len == maxLen){
                maxSum = max(maxSum, sum);
            }
            return;
        }
        
        solve(root->left, len + 1, sum + root->data, maxLen, maxSum);
        solve(root->right, len + 1, sum + root->data, maxLen, maxSum);
    }
    
    int sumOfLongRootToLeafPath(Node *root){
        int maxLen = 0, maxSum = 0;
        solve(root, 0, 0, maxLen, maxSum);
        return maxSum;
    }
};