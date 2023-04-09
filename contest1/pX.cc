#include <iostream>
using namespace std;
int main()
{
    int t, i, n, r, s;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        r = n % 10;
        while (n > 9)
        {
            n = n / 10;
        }
        s = n + r;
        cout << s << endl;
    }

    return 0;
}