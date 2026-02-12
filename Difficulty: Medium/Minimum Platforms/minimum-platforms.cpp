class Solution{
public:
    int minPlatform(vector<int>& arr, vector<int>& dep){
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int i=0,j=0,n=arr.size(),cur=0,ans=0;
        while(i<n && j<n){
            if(arr[i] <= dep[j]){
                cur++;
                if(cur>ans) ans=cur;
                i++;
            }else{
                cur--;
                j++;
            }
        }
        return ans;
    }
};
