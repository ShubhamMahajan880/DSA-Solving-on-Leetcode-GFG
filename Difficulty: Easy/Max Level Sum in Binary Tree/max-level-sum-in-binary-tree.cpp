class Solution {
public:
    int maxLevelSum(Node* root) {
        if(root == NULL)
            return 0;

        queue<Node*> q;
        q.push(root);

        int ans = INT_MIN;

        while(!q.empty()) {
            int size = q.size();
            int sum = 0;

            while(size--) {
                Node* curr = q.front();
                q.pop();

                sum += curr->data;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};