#include <stdio.h>
int main()
{
    int n, A[50];

    printf("Enter the series number that you want : ");
    scanf("%d", &n);

    A[0] = 0;
    A[1] = 1;
    for (int i = 2; i < n; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

    return 0;
}