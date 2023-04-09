#include <stdio.h>
int main()
{
    int A[10][10], numberOfRow, numberOfCols, sum = 0;

    printf("Enter the number of row : ");
    scanf("%d", &numberOfRow);
    printf("Enter the number of cols : ");
    scanf("%d", &numberOfCols);

    printf("Enter the elements of Array A : \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array A : \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }

    printf("The sum is = %d", sum);

    return 0;
}