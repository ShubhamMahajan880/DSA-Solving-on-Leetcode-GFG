class Solution {
public:
    int getLevelDiff(Node *root) {
        if(root == NULL)
            return 0;

        queue<Node*> q;
        q.push(root);

        int level = 1;
        int oddSum = 0;
        int evenSum = 0;

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                Node* curr = q.front();
                q.pop();

                if(level % 2 == 1)
                    oddSum += curr->data;
                else
                    evenSum += curr->data;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            level++;
        }

        return oddSum - evenSum;
    }
};