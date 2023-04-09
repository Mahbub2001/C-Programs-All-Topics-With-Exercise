#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the numnber that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= 10; rows++)
    {
        for (int col = 1; col <= numbers; col++)
        {
            printf("%2d  X %2d = %2d, ", col, rows, rows * col); // 2d for do same space 
        }
        printf("\n");
    }

    return 0;
}