#include <stdio.h>
int main()
{
    int A[10][10], rowSize, colSize, sum = 0;
    printf("Enter the size of rows : ");
    scanf("%d", &rowSize);
    printf("Enter the size of cols : ");
    scanf("%d", &colSize);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of the Array : \n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("diagonal elements are : ");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (i == j)
            {
                printf("%2d ", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nThe sum of the Array is : %d", sum);

    return 0;
}