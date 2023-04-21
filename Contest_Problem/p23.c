#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N], B[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int max = A[0], min = A[0];
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == min)
        {
            A[i] = max;
        }
        else if (A[i] == max)
        {
            A[i] = min;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}