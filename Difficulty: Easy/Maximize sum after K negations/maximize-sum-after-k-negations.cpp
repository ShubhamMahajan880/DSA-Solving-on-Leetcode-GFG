class Solution{
public:
    long long maximizeSum(long long a[], int n, int k){
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i=0;i<n;i++) pq.push(a[i]);
        while(k>0 && pq.top()<0){
            long long x=pq.top();
            pq.pop();
            pq.push(-x);
            k--;
        }
        if(k%2==1){
            long long x=pq.top();
            pq.pop();
            pq.push(-x);
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
