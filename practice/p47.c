#include <stdio.h>
#include <stdbool.h>
int main()
{
    int A[100], size, match_found;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Printing the Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nThe unique elements is : ");
    for (int i = 0; i < size; i++)
    {
        match_found = false;
        for (int j = 0; j < size; j++)
        {

            if (A[i] == A[j] && i != j)
            {
                match_found = true;
            }
        }
        if (match_found == false)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}