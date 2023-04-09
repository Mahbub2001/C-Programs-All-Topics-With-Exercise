#include <stdio.h>
int main()
{
    int A[100], size, count = 0;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Printing the Arary elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nDuplicates Array : ");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] == A[j])
            {
                printf("%d ", A[j]);
                count++;
                break;
            }
        }
    }
    printf("\nThe number of elements that are duplicate is = %d", count);

    return 0;
}