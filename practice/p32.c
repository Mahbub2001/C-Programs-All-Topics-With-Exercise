// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter how many do you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int cols = 1; cols <= rows; cols++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter how many do you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}