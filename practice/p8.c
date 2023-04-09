// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]

#include <stdio.h>
#include <math.h>
int main()
{
    int count;
    double x, k = 2, sum = 1, term = 1, fact, m;
    printf("Enter the count number: ");
    scanf("%d", &count);
    printf("Enter the value of X : ");
    scanf("%lf", &x);

    for (int i = 1; i < count; i++)
    {
        fact = 1;
        for (double j = 1; j <= k; j++)
        {
            fact = fact * j;
        }
        term = term * (-1);
        m = term * (pow(x, k) / fact);
        sum = sum + m;
        k += 2;
    }
    printf("The value of the sum is = %lf", sum);

    return 0;
}