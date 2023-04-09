#include <stdio.h>
int main()
{
    int A[100][100], B[100][100], C[100][100], rows1, cols1, rows2, cols2, sum = 0;
    printf("Enter the rows1 size : ");
    scanf("%d", &rows1);
    printf("Enter the cols1 size : ");
    scanf("%d", &cols1);
    printf("Enter the rows2 size : ");
    scanf("%d", &rows2);
    printf("Enter the rows1 size : ");
    scanf("%d", &cols2);

    printf("Enter the Array A : ");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Array B : ");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("Printing the Array A : \n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array B : \n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    if (rows1 == cols2)
    {
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                for (int k = 0; k < cols1; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                C[i][j] = sum;
                sum = 0;
            }
        }
    }
    else
    {
        printf("Can't mulplication......");
    }
    printf("\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}