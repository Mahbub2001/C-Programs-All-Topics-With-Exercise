#include <iostream>
using namespace std;

typedef long long ll;
#define tur(a) scanf("%lld", &a)
#define size1 300005
int main()
{
    ll T, n;
    tur(T);
    while (T--)
    {
        ll cnt = 0;
        tur(n);
        bool f = true;
        while (n != 1)
        {
            if (n % 5 == 0)
                n = (n / 5) * 4;
            else if (n % 3 == 0)
                n = (n / 3) * 2;
            else if (n % 2 == 0)
                n /= 2;
            else
            {
                cout << "-1" << endl;
                f = false;
                break;
            }
            cnt++;
        }
        if (f)
            cout << cnt << endl;
    }
    return 0;
}