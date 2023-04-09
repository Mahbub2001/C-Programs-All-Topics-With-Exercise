// 1/1+1/(1+2)+1/(1+2+3)+……… nth term
#include <stdio.h>
int main()
{
    double sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double sum1 = 0;
        for (int j = 1; j <= i; j++)
        {
            sum1 += j;
        }
        sum = sum + (double)(1 / sum1);
    }
    printf("%lf", sum);
}