class Solution {
public:
    vector<int> rightView(Node *root) {
        vector<int> ans;

        if(root == NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            int sz = q.size();

            while(sz--) {
                Node* curr = q.front();
                q.pop();

                if(sz == 0)
                    ans.push_back(curr->data);

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }
        }

        return ans;
    }
};