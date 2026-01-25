class Solution{
public:
    void nearlySorted(vector<int>& arr, int k){
        priority_queue<int, vector<int>, greater<int>> pq;
            int idx = 0;
        for(int i = 0; i < arr.size(); i++){
            pq.push(arr[i]);
            if(pq.size() > k){
                arr[idx++] = pq.top();
                pq.pop();
            }
        }
        while(!pq.empty()){
            arr[idx++] = pq.top();
            pq.pop();
        }
    }   
};
