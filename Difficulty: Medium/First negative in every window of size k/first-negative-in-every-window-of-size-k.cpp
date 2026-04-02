class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        int n = arr.size();
        
        for(int i = 0; i < n; i++){
            if(arr[i] < 0) dq.push_back(i);
            
            if(!dq.empty() && dq.front() <= i - k){
                dq.pop_front();
            }
            
            if(i >= k - 1){
                if(dq.empty()) ans.push_back(0);
                else ans.push_back(arr[dq.front()]);
            }
        }
        
        return ans;
    }
};