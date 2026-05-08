class Solution {
  public:
    Node* delNode(Node* root, int key) {
        if(!root) return NULL;
        
        if(key < root->data){
            root->left = delNode(root->left, key);
        }
        else if(key > root->data){
            root->right = delNode(root->right, key);
        }
        else{
            if(!root->left){
                Node* temp = root->right;
                delete root;
                return temp;
            }
            
            if(!root->right){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            Node* temp = root->right;
            
            while(temp->left){
                temp = temp->left;
            }
            
            root->data = temp->data;
            root->right = delNode(root->right, temp->data);
        }
        
        return root;
    }
};