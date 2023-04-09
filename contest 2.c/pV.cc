#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
    double a, b, c;
    double s, area1, m, small_r, area, circle, tt, rr;
    while (scanf("%lf%lf%lf", &a, &b, &c) == 3)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        m = (a * b * c) / (4 * area);
        small_r = area / s;
        rr = 4 * atan(1) * small_r * small_r;
        tt = area - rr;
        area1 = 4 * atan(1) * m * m;
        circle = area1 - area;
        printf("%.4lf %.4lf %.4lf\n", circle, tt, rr);
    }
    return 0;
}