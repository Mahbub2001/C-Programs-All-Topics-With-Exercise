#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], numberOfRow1, numberOfCols1, numberOfRow2, numberOfCols2, sum = 0;

    printf("Enter the row number of Array A : ");
    scanf("%d", &numberOfRow1);
    printf("Enter the col number of Array A : ");
    scanf("%d", &numberOfCols1);

    printf("Enter the row number of Aray B : ");
    scanf("%d", &numberOfRow2);
    printf("Enter the col number of Array B : ");
    scanf("%d", &numberOfCols2);

    while (numberOfCols1 != numberOfRow2)
    {
        printf("Error....................Write Again....\n");

        printf("Enter the row number of Array A : ");
        scanf("%d", &numberOfRow1);
        printf("Enter the col number of Array A : ");
        scanf("%d", &numberOfCols1);

        printf("Enter the row number of Aray B : ");
        scanf("%d", &numberOfRow2);
        printf("Enter the col number of Array B : ");
        scanf("%d", &numberOfCols2);
    }

    printf("Enter the elements of Array A : \n");
    for (int i = 0; i < numberOfRow1; i++)
    {
        for (int j = 0; j < numberOfCols1; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of Array B : \n");
    for (int i = 0; i < numberOfRow2; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("Printing the elements of Array A : \n");
    for (int i = 0; i < numberOfRow1; i++)
    {
        for (int j = 0; j < numberOfCols1; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of Array B : \n");
    for (int i = 0; i < numberOfRow2; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            printf("%2d ", B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numberOfRow1; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            for (int k = 0; k < numberOfCols1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
        printf("\n");
    }

    printf("Printing the elements of Array C : \n");
    for (int i = 0; i < numberOfRow1; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            printf("%2d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}