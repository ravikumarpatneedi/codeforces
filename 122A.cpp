#include <bits/stdc++.h>
using namespace std;
int n;
main()
{
    int n;
    cin >> n;
    int arr[n], arr2[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr2[arr[i]]=i;
    }

    for (int j = 1; j <= n; j++)
    {
        cout<<arr2[j]<<" ";
    }
}