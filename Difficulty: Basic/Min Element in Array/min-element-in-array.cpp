#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int minElement = A[0];
    for(int i = 1; i < n; i++)
    {
        if(A[i] < minElement)
        {
            minElement = A[i];
        }
    }

    cout << minElement;
    return 0;
}
