//         A
//       A B A
//     A B C B A
//   A B C D C B A
#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows number that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf("  ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("%c ", col + 64);
        }
        for (int col = rows - 1; col >= 1; col--)
        {
            printf("%c ", col + 64);
        }
        printf("\n");
    }

    return 0;
}
