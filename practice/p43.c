#include <stdio.h>
int main()
{
    int A[100][100], B[100][100],C[100][100],rows, cols;
    printf("Enter the rows number : ");
    scanf("%d", &rows);
    printf("Enter the cols number : ");
    scanf("%d", &cols);
    printf("A: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("B: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           C[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}