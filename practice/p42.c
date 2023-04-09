#include <stdio.h>
int main()
{
    int A[10][100][100], numberOfArrays, numberOfRows, numberOfCols;
    printf("Enter the number of Array : ");
    scanf("%d", &numberOfArrays);
    printf("Enter the number of rows : ");
    scanf("%d", &numberOfRows);
    printf("Enter the number of cols : ");
    scanf("%d", &numberOfCols);

    printf("Scanning the Array elements : ");
    for (int i = 0; i < numberOfArrays; i++)
    {
        for (int j = 0; j < numberOfRows; j++)
        {
            for (int k = 0; k < numberOfCols; k++)
            {
                printf("[%d][%d][%d] = ", i, j, k);
                scanf("%d", &A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    printf("\nPrinting the Array A : \n");
    for (int i = 0; i < numberOfArrays; i++)
    {
        for (int j = 0; j < numberOfRows; j++)
        {
            for (int k = 0; k < numberOfCols; k++)
            {
                printf("%2d ", A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

