// #include <stdio.h>
// int main()
// {
//     int numbers[3][4];

//     printf("Enter the numbers : \n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("[%d][%d] = ", i, j);
//             scanf("%d", &numbers[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("[%d][%d] = [%2d] ", i, j, numbers[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int numbers[3][4];

    printf("Enter the numbers that you want to store : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d] [%d] = ",i,j);
            scanf("%d", &numbers[i][j]);
        }
        printf("\n");
    }

    printf("The numbers are : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d][%d] = [%2d] ", i, j, numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}