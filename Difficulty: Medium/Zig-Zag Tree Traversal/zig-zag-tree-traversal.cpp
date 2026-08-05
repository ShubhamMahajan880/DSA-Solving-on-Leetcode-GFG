class Solution {
public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;

        if(root == NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()) {
            int n = q.size();
            vector<int> level(n);

            for(int i = 0; i < n; i++) {
                Node* curr = q.front();
                q.pop();

                int index = leftToRight ? i : n - 1 - i;
                level[index] = curr->data;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            for(int x : level)
                ans.push_back(x);

            leftToRight = !leftToRight;
        }

        return ans;
    }
};