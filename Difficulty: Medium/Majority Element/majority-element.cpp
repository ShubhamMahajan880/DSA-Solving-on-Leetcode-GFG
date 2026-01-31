class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        int expectedVar = arr[n/2];
        int count = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(arr[i] == expectedVar)
            {
                count++;
            }
        }
        
        if(count>n/2)
        {
            return expectedVar;
        }
        else
        return -1;
    }
};