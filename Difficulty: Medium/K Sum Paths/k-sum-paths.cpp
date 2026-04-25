class Solution{
public:
    int countAllPaths(Node *root, int k){
        unordered_map<long long,int> mp;
        mp[0] = 1;
        return dfs(root, 0, k, mp);
    }
    
    int dfs(Node* node, long long curr, int k, unordered_map<long long,int>& mp){
        if(!node) return 0;
        
        curr += node->data;
        
        int cnt = mp[curr-k];
        
        mp[curr]++;
        
        cnt += dfs(node->left, curr, k, mp);
        cnt += dfs(node->right, curr, k, mp);
        
        mp[curr]--;
        
        return cnt;
    }
};