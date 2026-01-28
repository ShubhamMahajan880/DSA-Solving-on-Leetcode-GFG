class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int maxEle = arr[0];
        for(int i = 1; i<n; i++)
        {
            if(arr[i]>maxEle)
            {
                maxEle = arr[i];
            }
        }
        return maxEle;
            
        
    }
};
