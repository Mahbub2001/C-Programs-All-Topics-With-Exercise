#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * rows - 1; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    for (int rows = numbers - 1; rows >= 1; rows--)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * rows - 1; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

    return 0;
}