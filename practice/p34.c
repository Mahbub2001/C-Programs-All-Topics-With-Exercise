// 2.
// #include <stdio.h>
// int main()
// {
//     int A[10], number;
//     printf("Enter the number that you want : ");
//     scanf("%d", &number);

//     for (int i = 0; i < number; i++)
//     {
//         printf("[%d] = ", i);
//         scanf("%d", &A[i]);
//     }
//     for (int i = number - 1; i >= 0; i--)
//     {
//         printf("%d", A[i]);
//     }

//     return 0;
// }

// 4.
// #include <stdio.h>
// int main()
// {

//     int A[10], B[10], number;
//     printf("Enter the number that you want : ");
//     scanf("%d", &number);

//     for (int i = 0; i < number; i++)
//     {
//         printf("[%d] = ", i+1);
//         scanf("%d", &A[i]);
//     }
//     printf("Printing the Array A : \n");
//     for (int i = 0; i < number; i++)
//     {
//         printf("%d ", A[i]);
//     }

//     for (int i = 0; i < number; i++)
//     {
//         B[i] = A[i];
//     }
//     printf("\nPrinting the Array B : \n");
//     for (int i = 0; i < number; i++)
//     {
//         printf("%d ", B[i]);
//     }
// }

#include <stdio.h>
int main()
{
    int number, A[100], count = 0;
    printf("Enter the array number : ");
    scanf("%d", &number);

    printf("Input the array elements : \n");
    for (int i = 0; i < number; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("Printing the elements of the Array : \n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", A[i]);
    }
    for (int i = 0; i < number; i++)
    {
        for (int j = i + 1; j < number; j++)
        {
            if (A[i] == A[j])
            {
                printf("\n%d ", A[j]);
                count++;
                break;
            }
        }
    }
    printf("\nThe numbers of duplicate number = %d", count);

    return 0;
}