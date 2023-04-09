// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int cols = 1; cols <= rows; cols++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int cols = 1; cols <= rows; cols++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}