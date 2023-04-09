#include <stdio.h>

int display(int x[100][100], int numberOfRows, int numberOfCols)
{

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%2d][%2d] = [%2d]  ", i, j, x[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int numberOfRows, numberOfCols, A[100][100];
    printf("Enter the rows number that you want : ");
    scanf("%d", &numberOfRows);
    printf("Enter the cols number that you want : ");
    scanf("%d", &numberOfCols);

    display(A, numberOfRows, numberOfCols);

    return 0;
}