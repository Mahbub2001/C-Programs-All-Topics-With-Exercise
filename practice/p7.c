//  Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]
#include<stdio.h>
#include<math.h>
int main()
{
    double x, sum = 1, fact, y = 2, term = 1,m;
    int count;

    printf("Enter the value of x = ");
    scanf("%lf",&x);

    printf("Enter the count number = ");
    scanf("%d",&count);

    for (int i = 1; i <= count; i++)
    { 
        fact=1;
        for (double j = 1; j <= y; j++)
        {
            fact = fact * j;
        }
        term = term*(-1);
        m= term * pow(x,y)/fact;
        sum = sum + m;
        y+=2;
    }
    printf("The sum is = %lf",sum);

    return 0;
}