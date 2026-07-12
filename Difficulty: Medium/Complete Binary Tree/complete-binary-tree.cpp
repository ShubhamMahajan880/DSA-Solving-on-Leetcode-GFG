class Solution {
public:
    bool isCompleteBT(Node* root) {
        if(!root)
            return true;

        queue<Node*> q;
        q.push(root);

        bool nullSeen = false;

        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if(curr == NULL) {
                nullSeen = true;
            }
            else {
                if(nullSeen)
                    return false;

                q.push(curr->left);
                q.push(curr->right);
            }
        }

        return true;
    }
};