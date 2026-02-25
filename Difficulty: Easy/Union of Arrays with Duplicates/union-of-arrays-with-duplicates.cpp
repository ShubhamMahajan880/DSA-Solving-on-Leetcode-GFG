class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> st;
        for(int i=0;i<a.size();i++) st.insert(a[i]);
        for(int i=0;i<b.size();i++) st.insert(b[i]);
        
        vector<int> ans;
        for(auto x : st) ans.push_back(x);
        return ans;
    }
};