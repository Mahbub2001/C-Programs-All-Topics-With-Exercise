#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    int X, count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}