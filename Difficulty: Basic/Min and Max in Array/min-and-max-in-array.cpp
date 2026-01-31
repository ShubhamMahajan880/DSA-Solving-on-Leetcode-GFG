class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int n = arr.size();
        int minIdx = INT_MAX;
        int maxIdx = INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]<minIdx)
            {
                minIdx = arr[i];
            }
        }
        
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]>maxIdx)
            {
                maxIdx = arr[i];
            }
        }
        
        vector<int> Ans;
        Ans.push_back(minIdx);
        Ans.push_back(maxIdx);
        
        return Ans;
    }
};