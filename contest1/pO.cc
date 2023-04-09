#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include <queue>
#include <stdlib.h>

using namespace std;

int a[100000];
int b[100000];
int c1 = 0;

int f(int *a, int c1, int v)
{
    for (int i = 0; i != c1; ++i)
        if (a[i] == v)
            return i;

    return -1;
}
int main()
{
    memset(b, 0, sizeof(b));

    int n;
    while (cin >> n)
    {
        int temp = f(a, c1, n);
        if (temp < 0)
        {
            a[c1] = n;
            ++b[c1];
            c1++;
        }
        else
        {
            ++b[temp];
        }
    }
    for (int i = 0; i != c1; ++i)
    {
        cout << a[i] <<" "<< b[i] << endl;
    }

    return 0;
}