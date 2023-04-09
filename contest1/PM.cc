#include <iostream>
using namespace std;
int main()
{
    int a;
    long b, c, d, l1, l2;
    cin >> a;
    while (a--)
    {
        l1 = l2 = 100000000;
        cin >> b;
        while (b--)
        {
            cin >> c;
            if (c < l1)
            {
                l2 = l1;
                l1 = c;
            }
            else if (c < l2)
                l2 = c;
        }
        cout << l1 + l2 << endl;
    }
}