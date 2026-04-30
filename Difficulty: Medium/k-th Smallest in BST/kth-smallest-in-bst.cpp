class Solution {
  public:
    int kthSmallest(Node *root, int K) {
        stack<Node*> st;
        Node* curr = root;
        
        while(curr != NULL || !st.empty()){
            while(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            
            K--;
            if(K == 0) return curr->data;
            
            curr = curr->right;
        }
        
        return -1;
    }
};