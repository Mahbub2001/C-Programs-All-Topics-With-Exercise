#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    long long int A[N];
    long long int X;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    scanf("%lld",&X);

    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            printf("%d", i);
            flag = 1;
            break;
        }
        else if (i == N - 1 && flag == 0)
        {
            printf("%d", -1);
        }
    }

    return 0;
}