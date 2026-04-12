class Solution {
public:
    vector<int> postOrder(Node* root) {
        vector<int> res;
        if (!root) return res;
        stack<Node*> st1, st2;
        st1.push(root);
        while (!st1.empty()) {
            Node* cur = st1.top();
            st1.pop();
            st2.push(cur);
            if (cur->left) st1.push(cur->left);
            if (cur->right) st1.push(cur->right);
        }
        while (!st2.empty()) {
            res.push_back(st2.top()->data);
            st2.pop();
        }
        return res;
    }
};
