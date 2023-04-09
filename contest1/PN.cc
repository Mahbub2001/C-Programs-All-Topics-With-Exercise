#include <iostream>
using namespace std;
int abs(int x)
{
    if (x < 0)
        x = -1 * x;
    return x;
}
int main()
{
    int x1, y1, x2, y2;
    while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF)
    {
        int x = abs(x1 - x2);
        int y = abs(y1 - y2);
        int maxx = max(x, y);
        printf("%d\n", maxx);
    }
    return 0;
}