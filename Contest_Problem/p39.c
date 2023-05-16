#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}