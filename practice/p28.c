#include <stdio.h>
int main()
{
    int A[10][10], transpose[10][10], numberOfRow, numberOfCols;

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
            transpose[j][i] = A[i][j];
        }
    }

    printf("Printing the Array Transpose : \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}