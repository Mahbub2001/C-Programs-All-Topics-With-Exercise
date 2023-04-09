#include<stdio.h>
int main()
{

    int n;
    printf("Enter the term number : ");
    scanf("%d",&n);

    double term = -1;
    double sum = 0;
    double j = 1;

    for (int i = 1; i <= n; i++)
    {
        term = term*(-1);
        sum = sum + (double)((1/j)*term);
        j+=2;
    }
    printf("%lf",sum);
    

    return 0;
}