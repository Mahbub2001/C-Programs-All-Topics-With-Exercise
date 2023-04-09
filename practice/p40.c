#include <stdio.h>
int main()
{
    int A[100], size, min;

    printf("Enter the size of the Array A : ");
    scanf("%d", &size);

    printf("Enter the element of Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("Printing the Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    min = A[0];
    for (int i = 0; i < size; i++)
    {
        if (A[0] > A[i])

        {
            min = A[i];
        }
    }

    printf("The max value is = %d", min);
    return 0;
}