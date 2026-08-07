class Solution {
public:
    bool isLeaf(Node* root) {
        return root->left == NULL && root->right == NULL;
    }

    void addLeftBoundary(Node* root, vector<int>& ans) {
        Node* cur = root->left;

        while(cur) {
            if(!isLeaf(cur))
                ans.push_back(cur->data);

            if(cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }

    void addLeaves(Node* root, vector<int>& ans) {
        if(root == NULL)
            return;

        if(isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }

        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }

    void addRightBoundary(Node* root, vector<int>& ans) {
        Node* cur = root->right;
        vector<int> temp;

        while(cur) {
            if(!isLeaf(cur))
                temp.push_back(cur->data);

            if(cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }

        for(int i = temp.size() - 1; i >= 0; i--)
            ans.push_back(temp[i]);
    }

    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;

        if(root == NULL)
            return ans;

        if(!isLeaf(root))
            ans.push_back(root->data);

        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);

        return ans;
    }
};