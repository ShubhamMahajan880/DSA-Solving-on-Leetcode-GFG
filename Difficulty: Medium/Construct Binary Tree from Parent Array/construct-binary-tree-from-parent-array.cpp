class Solution{
public:
    Node* createTree(vector<int>& parent){
        int n = parent.size();
        vector<Node*> nodes(n, NULL);
        Node* root = NULL;
        
        for(int i = 0; i < n; i++){
            nodes[i] = new Node(i);
        }
        
        for(int i = 0; i < n; i++){
            if(parent[i] == -1){
                root = nodes[i];
            } else {
                Node* p = nodes[parent[i]];
                
                if(!p->left) p->left = nodes[i];
                else p->right = nodes[i];
            }
        }
        
        return root;
    }
};