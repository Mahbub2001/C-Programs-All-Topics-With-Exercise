#include <stdio.h>
int main()
{
    int A[100], even[100], odd[100], size, j = 0, k = 0;
    printf("Enter the size of Array A : ");
    scanf("%d", &size);

    printf("Enter the element of Array A : \n");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ",i);
        scanf("%d", &A[i]);
    }
    printf("Printing the elements of Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (A[i] % 2 == 0)
        {
            even[j] = A[i];
            j++;
        }
        else
        {
            odd[k] = A[i];
            k++;
        }
    }

    printf("The even numbers : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }

    printf("The odd numbers are : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}