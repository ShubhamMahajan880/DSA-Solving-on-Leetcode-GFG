class Solution {
public:
    int getMaxArea(vector<int>& arr) {
        stack<int> st;
        int maxA = 0;
        int i = 0, n = arr.size();
        
        while(i < n){
            if(st.empty() || arr[st.top()] <= arr[i]){
                st.push(i++);
            } else {
                int top = st.top();
                st.pop();
                
                int area = arr[top] * (st.empty() ? i : i - st.top() - 1);
                maxA = max(maxA, area);
            }
        }
        
        while(!st.empty()){
            int top = st.top();
            st.pop();
            
            int area = arr[top] * (st.empty() ? i : i - st.top() - 1);
            maxA = max(maxA, area);
        }
        
        return maxA;
    }
};