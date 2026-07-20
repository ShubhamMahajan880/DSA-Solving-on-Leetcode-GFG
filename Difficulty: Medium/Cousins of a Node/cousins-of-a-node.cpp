class Solution {
public:
    vector<int> getCousins(Node* root, Node* p) {
        vector<int> ans;

        if(root == NULL || root == p)
            return {-1};

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            int sz = q.size();
            bool found = false;

            while(sz--) {
                Node* curr = q.front();
                q.pop();

                if((curr->left == p) || (curr->right == p)) {
                    found = true;
                }
                else {
                    if(curr->left)
                        q.push(curr->left);

                    if(curr->right)
                        q.push(curr->right);
                }
            }

            if(found) {
                while(!q.empty()) {
                    ans.push_back(q.front()->data);
                    q.pop();
                }

                if(ans.empty())
                    return {-1};

                return ans;
            }
        }

        return {-1};
    }
};