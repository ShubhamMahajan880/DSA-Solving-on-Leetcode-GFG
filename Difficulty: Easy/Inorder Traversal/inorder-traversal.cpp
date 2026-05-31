class Solution {
public:
    vector<int> inOrder(Node* root) {
        vector<int> res;
        stack<Node*> st;
        Node* cur = root;
        while (cur || !st.empty()) {
            while (cur) {
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            res.push_back(cur->data);
            cur = cur->right;
        }
        return res;
    }
};
