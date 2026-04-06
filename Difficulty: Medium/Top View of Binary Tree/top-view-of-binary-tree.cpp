class Solution {
public:
    vector<int> topView(Node* root) {
        vector<int> res;
        if (root == NULL) return res;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            Node* node = cur.first;
            int hd = cur.second;
            if (mp.find(hd) == mp.end())
                mp[hd] = node->data;
            if (node->left) q.push({node->left, hd - 1});
            if (node->right) q.push({node->right, hd + 1});
        }
        for (auto &x : mp) res.push_back(x.second);
        return res;
    }
};
