#include <stdio.h>
int main()
{
    int A[100][100], rows, cols;
    printf("Enter the rows number that you want : ");
    scanf("%d", &rows);

    printf("Enter the cols number that you want : ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array elements : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", A[i][j]);
        } 
        printf("\n");
    }

    return 0;
}