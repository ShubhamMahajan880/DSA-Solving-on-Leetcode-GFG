// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};