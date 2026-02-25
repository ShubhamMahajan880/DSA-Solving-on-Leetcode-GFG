class Solution{
public:
    int maxLength(vector<int>& A){
        unordered_map<int,int> mp;
        int sum = 0, ans = 0;
        
        for(int i=0;i<A.size();i++){
            sum += A[i];
            
            if(sum == 0) ans = i + 1;
            
            if(mp.count(sum)){
                ans = max(ans, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        
        return ans;
    }
};