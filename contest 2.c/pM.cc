#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, i, j, count = 0;
        cin >> a >> b;
        for (j = a; j <= b; j++)
        {
            int f = 0;
            i = j;
            if (j == 0)
                count++;
            while (i > 0)
            {
                int p = i % 10;
                if (p == 0)
                {
                    f = 1;
                    count++;
                    break;
                }
                i = i / 10;
            }
        }
        long int x = b - a + 1;
        cout << count << "/" << x << endl;
    }
    return 0;
}