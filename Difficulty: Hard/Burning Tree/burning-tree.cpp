class Solution {
public:
    unordered_map<Node*, Node*> parent;

    void markParents(Node* root) {
        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if(curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }

            if(curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

    Node* findTarget(Node* root, int target) {
        if(!root)
            return NULL;

        if(root->data == target)
            return root;

        Node* left = findTarget(root->left, target);
        if(left)
            return left;

        return findTarget(root->right, target);
    }

    int minTime(Node* root, int target) {
        if(!root)
            return 0;

        parent.clear();
        markParents(root);

        Node* start = findTarget(root, target);

        unordered_map<Node*, bool> vis;
        queue<Node*> q;

        q.push(start);
        vis[start] = true;

        int time = -1;

        while(!q.empty()) {
            int sz = q.size();
            time++;

            while(sz--) {
                Node* curr = q.front();
                q.pop();

                if(curr->left && !vis[curr->left]) {
                    vis[curr->left] = true;
                    q.push(curr->left);
                }

                if(curr->right && !vis[curr->right]) {
                    vis[curr->right] = true;
                    q.push(curr->right);
                }

                if(parent.count(curr) && !vis[parent[curr]]) {
                    vis[parent[curr]] = true;
                    q.push(parent[curr]);
                }
            }
        }

        return time;
    }
};