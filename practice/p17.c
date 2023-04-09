// 2. Write a C program to find the sum of the following series of first
// n terms where n will be given as input and n &g t;= 2.

// 1 + 3 + 7 + 15 + …. + n th term
// Hint: t n = 2* t n-1 + 1, where t n is the n th term for n &gt; 1 and t 1 = 1

#include <stdio.h>
int main()
{
    int n, i, pr = 0, sum = 0;
    printf("Enter the range of number(Limit):");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        pr = (pr * 2) + 1;
        sum = sum + pr;
    }
    printf("%d", sum);
}