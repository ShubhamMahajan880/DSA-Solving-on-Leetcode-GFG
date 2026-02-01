class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        int i = 0;
        int j = m-1;
        
        
        
        while(i<n && j>=0)
        {
            int key  = mat[i][j];
            if(key == x)
            {
                return true;
            }
            else if(key>x)
            {
                j--;
            }
            else
            i++;
        }
        return false;
        
    }
};