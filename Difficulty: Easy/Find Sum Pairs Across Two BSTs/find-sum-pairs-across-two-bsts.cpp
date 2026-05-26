class Solution{
public:
    void inorder(Node* root, vector<int>& arr){
        if(!root) return;
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    int countPairs(Node* root1, Node* root2, int x){
        vector<int> a,b;
        
        inorder(root1,a);
        inorder(root2,b);
        
        int i=0;
        int j=b.size()-1;
        
        int cnt=0;
        
        while(i<a.size() && j>=0){
            int sum=a[i]+b[j];
            
            if(sum==x){
                cnt++;
                i++;
                j--;
            }
            else if(sum<x){
                i++;
            }
            else{
                j--;
            }
        }
        
        return cnt;
    }
};