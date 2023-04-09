#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkSorted(int n, int arr[])
{
    int b[n];
    for (int i = 0; i < n; i++)
        b[i] = arr[i];
    sort(b, b + n);
    int ct = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != b[i])
            ct++;
    if (ct == 0 || ct == 2)
        return true;
    else
        return false;
}
int main()
{
    int arr[50], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (checkSorted(n, arr))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}