// The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.
#include <stdio.h>
int main()
{
    int T, A[100], i, B[10];
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &A[i]);
        }
        int temp = A[0];
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (A[j] > A[i])
                {
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        B[i] = A[1];
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d\n", B[i]);
    }
    return 0;
}