class Solution{
public:
    long long sumBetweenTwoKth(long long arr[], long long n, long long k1, long long k2){
        priority_queue<long long> pq;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k2-1) pq.pop();
        }
        long long sum=0;
        while(pq.size()>k1){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
