#include <stdio.h>
int main()
{
    int A[100], size;
    printf("Enter the number that you want : ");
    scanf("%d", &size);

    A[0] = 0;
    A[1] = 1;

    for (int i = 2; i < size; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}