// #include<stdio.h>
// #include<string.h>
// int main(){

//     char S[1001];
//     fgets(S, sizeof(S), stdin);
//     int cap=0,sm=0,spc=0;

//     for (int i = 0; S[i]!='\0'; i++)
//     {
//         if (S[i]>='A' && S[i]<='Z')
//         {
//             cap++;
//         }
//         else if (S[i]>='a' && S[i]<='z')
//         {
//             sm++;
//         }
//         else if (S[i] == ' ')
//         {
//             spc++;
//         }
//     }
//     printf("Capital - %d\nSmall - %d\nSpaces - %d\n",cap,sm,spc);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);

//     for (int rows = 1; rows <= N; rows++)
//     {
//         for (int spc = 1; spc <= N - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             if (rows % 2 != 0)
//             {
//                 printf("^");
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int tiger = 0, pathan = 0;
//     while (N--)
//     {
//         long long int X1, X2;
//         scanf("%lld %lld", &X1, &X2);
//         if (X1 > X2)
//         {
//             tiger++;
//         }
//         else if(X1<X2)
//         {
//             pathan++;
//         }
//     }
//     if (tiger > pathan)
//     {
//         printf("Tiger");
//     }
//     else if (pathan > tiger)
//     {
//         printf("Pathan");
//     }
//     else
//     {
//         printf("Draw");
//     }
// }

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int tmp = A[0];
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[j] < A[i])
            {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    if (N % 2 == 0)
    {
        printf("%d %d", A[(N / 2) - 1], A[(N / 2)]);
    }
    else
    {
        printf("%d", A[(N / 2)]);
    }

    return 0;
}