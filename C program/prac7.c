#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2,Distance;

    x1 = 25;
    y1 = 15;
    x2 = 35;
    y2 = 10;

    Distance= pow((x2-x1),2)+pow((y2-y1),2);

    printf("The Distance is = %lf",sqrt(Distance));

    return 0;
}