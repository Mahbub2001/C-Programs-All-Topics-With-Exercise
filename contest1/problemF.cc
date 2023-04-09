#include<iostream>
using namespace std;
int main()
{
    int T, N[10], i, sum;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> N[i];
    }
    for (i = 0; i < T; i++)
    {
        sum = 0;
        while (N[i] != 0)
        {
            sum = sum + N[i] % 10;

            N[i] = N[i] / 10;
        }
        cout << sum << endl;
    }
    return 0;
}