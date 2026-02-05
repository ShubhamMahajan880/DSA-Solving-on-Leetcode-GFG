class Solution{
public:
    void heapify(vector<int>& a, int n, int i){
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<n && a[l]>a[largest]) largest=l;
        if(r<n && a[r]>a[largest]) largest=r;
        if(largest!=i){
            swap(a[i],a[largest]);
            heapify(a,n,largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m){
        vector<int> c=a;
        for(int x: b) c.push_back(x);
        int sz=c.size();
        for(int i=sz/2-1;i>=0;i--) heapify(c,sz,i);
        return c;
    }
};
