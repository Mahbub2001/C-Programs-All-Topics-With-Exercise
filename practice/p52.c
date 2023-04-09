// #include <stdio.h>
// int convert(int number)
// {
//     static int r;
//     if (number != 0)
//     {
//         convert(number / 2);
//         printf("%d  ", number % 2);
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int number;
//     printf("Enter the number that you want : ");
//     scanf("%d", &number);

//     convert(number);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int number, a[100],i;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    for (int i = 0; number != 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }

    return 0;
}