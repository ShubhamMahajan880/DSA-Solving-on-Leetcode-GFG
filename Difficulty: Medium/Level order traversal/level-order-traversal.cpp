class Solution {
public:
    vector<int> levelOrder(Node* root) {
        vector<int> ans;

        if(!root) return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            Node* node = q.front();
            q.pop();

            ans.push_back(node->data);

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }

        return ans;
    }
};