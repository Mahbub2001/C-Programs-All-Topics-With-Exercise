#include <iostream>
using namespace std;
int main()
{
    int T, N, i, s, d;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> N;
        d = 0;
        while (N > 0)
        {
            s = N % 10;
            d = d * 10 + s;
            N = N / 10;
        }
        cout << d << endl;
    }

    return 0;
}
