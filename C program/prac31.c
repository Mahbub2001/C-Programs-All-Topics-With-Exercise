// #include <stdio.h>

// int pattern()
// {
//     int rows;
//     printf("Enter the number : ");
//     scanf("%d", &rows);

//     return rows;
// }
// int main()
// {
//       int a,k=1;
//       a=pattern();

//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", k++);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int pattern()
// {
//     int rows;
//     printf("Enter the rows number : ");
//     scanf("%d", &rows);
//     return rows;
// }

// int main()
// {
//     int rows, spc, t = 1;
//     rows=pattern();
//     spc = rows + 4 - 1;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int k = spc; k >= 1; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", t++);
//         }
//         printf("\n");
//         spc--;
//     }
//     return 0;
// }

#include <stdio.h>

int patterns()
{

    int rows;
    printf("Enter the rows number that you want to creat : ");
    scanf("%d", &rows);

    return rows;
}
int main()
{
    int rows, spc;
    rows = patterns();
    spc = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = spc; k >= 1; k--)
        {
            printf(" ");

        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        spc--;
        
    }
    return 0;
}