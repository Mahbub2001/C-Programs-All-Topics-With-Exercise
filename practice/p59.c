#include <stdio.h>
int main()
{
    int numberOfRows, numberOfCols, sum = 0, A[10][10];

    printf("Ënter the number of rows = ");
    scanf("%d", &numberOfRows);
    printf("Enter the number of cols = ");
    scanf("%d", &numberOfCols);

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("The matrix is : ");

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            if (i + j == numberOfCols - 1)
            {
                printf("%d ", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nThe sum is = %d", sum);

    return 0;
}