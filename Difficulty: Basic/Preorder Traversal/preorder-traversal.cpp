class Solution {
public:
    vector<int> preOrder(Node* root) {
        vector<int> res;
        stack<Node*> st;
        if (root) st.push(root);
        while (!st.empty()) {
            Node* cur = st.top();
            st.pop();
            res.push_back(cur->data);
            if (cur->right) st.push(cur->right);
            if (cur->left) st.push(cur->left);
        }
        return res;
    }
};
