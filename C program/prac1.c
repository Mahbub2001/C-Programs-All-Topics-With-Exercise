#include <stdio.h>
#include <math.h>
int main()
{
    double F;
    printf("Enter the value of Farenhide : ");
    scanf("%lf", &F);

    double Centigrade = (5 * (F - 32)) / 9;
    printf("Centigrade = %lf", Centigrade);

    return 0;
}

