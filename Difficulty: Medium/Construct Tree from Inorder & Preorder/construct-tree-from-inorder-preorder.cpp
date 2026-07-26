class Solution {
public:
    unordered_map<int, int> mp;

    Node* solve(vector<int>& inorder, vector<int>& preorder,
                int &idx, int l, int r) {
        if(l > r)
            return NULL;

        Node* root = new Node(preorder[idx++]);

        int pos = mp[root->data];

        root->left = solve(inorder, preorder, idx, l, pos - 1);
        root->right = solve(inorder, preorder, idx, pos + 1, r);

        return root;
    }

    Node* buildTree(vector<int>& inorder, vector<int>& preorder) {
        mp.clear();

        for(int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        int idx = 0;

        return solve(inorder, preorder, idx, 0, inorder.size() - 1);
    }
};