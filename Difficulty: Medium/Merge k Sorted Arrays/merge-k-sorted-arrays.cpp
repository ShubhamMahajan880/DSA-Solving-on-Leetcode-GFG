class Solution{
public:
    vector<int> mergeArrays(vector<vector<int>> matrix){
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto &row : matrix){
            for(int x : row) pq.push(x);
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};
