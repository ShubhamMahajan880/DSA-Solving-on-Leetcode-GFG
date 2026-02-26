int constructUtil(int arr[], int ss, int se, int *st, int si) {
    if(ss == se) {
        st[si] = arr[ss];
        return st[si];
    }
    
    int mid = (ss + se) / 2;
    
    st[si] = min(
        constructUtil(arr, ss, mid, st, si*2+1),
        constructUtil(arr, mid+1, se, st, si*2+2)
    );
    
    return st[si];
}

int* constructST(int arr[], int n) {
    int x = ceil(log2(n));
    int max_size = 2 * pow(2, x) - 1;
    
    int *st = new int[max_size];
    
    constructUtil(arr, 0, n-1, st, 0);
    
    return st;
}

int RMQUtil(int *st, int ss, int se, int qs, int qe, int index) {
    
    if(qs <= ss && qe >= se)
        return st[index];
    
    if(se < qs || ss > qe)
        return INT_MAX;
    
    int mid = (ss + se) / 2;
    
    return min(
        RMQUtil(st, ss, mid, qs, qe, 2*index+1),
        RMQUtil(st, mid+1, se, qs, qe, 2*index+2)
    );
}

int RMQ(int *st, int n, int qs, int qe) {
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}