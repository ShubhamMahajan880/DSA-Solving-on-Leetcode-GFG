class Solution {
public:
    bool findPath(Node* root, int x, vector<Node*>& path) {
        if (root == NULL) return false;
        path.push_back(root);
        if (root->data == x) return true;
        if (findPath(root->left, x, path) || findPath(root->right, x, path))
            return true;
        path.pop_back();
        return false;
    }

    Node* lca(Node* root, int n1, int n2) {
        vector<Node*> p1, p2;
        if (!findPath(root, n1, p1) || !findPath(root, n2, p2))
            return NULL;
        int i = 0;
        while (i < p1.size() && i < p2.size() && p1[i] == p2[i]) i++;
        return p1[i - 1];
    }
};
