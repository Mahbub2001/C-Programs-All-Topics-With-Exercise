#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}