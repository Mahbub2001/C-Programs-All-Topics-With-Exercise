#include <stdio.h>
int main()
{

    int A[10][10], numberOfRow, numberOfCols, upperSum = 0, lowersum = 0;

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
            if (i < j)
            {
                upperSum = upperSum + A[i][j];
            }
            if (i > j)
            {
                lowersum = lowersum + A[i][j];
            }
        }
    }
    printf("The upperSum is = %d\n",upperSum);
    printf("The lowerSum is = %d",lowersum);

    return 0;
}