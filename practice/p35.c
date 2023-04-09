#include <stdio.h>
int main()
{
    int A[100], B[100], size;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Printing the element of Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    for (int i = 0; i < size; i++)
    {
        B[i] = A[i];
    }
    printf("printing the updated Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}