#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int i, j, x1, x2, x3, y2;
    double x[10], y[10], a, b, x4, y4;
    while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]) == 8)
    {
        for (i = 1; i <= 3; i++)
        {
            for (j = i + 1; j <= 4; j++)
            {
                if (x[i] == x[j] && y[i] == y[j])
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        for (i = 1; i <= 4; i++)
        {
            if (i != x2 && i != y2)
            {
                x1 = i;
                break;
            }
        }
        for (i = 1; i <= 4; i++)
        {
            if (i != x2 && i != y2 && i != x1)
            {
                x3 = i;
                break;
            }
        }
        a = (x[x1] + x[x3]) / 2;
        b = (y[x1] + y[x3]) / 2;
        x4 = 2 * a - x[x2];
        y4 = 2 * b - y[x2];
        printf("%.3lf %.3lf\n", x4, y4);
    }
    return 0;
}