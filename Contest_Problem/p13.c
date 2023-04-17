#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    long long int N[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%lld", &N[i]);
    }

    for (int i = 0; i < T; i++)
    {
        if (N[i] == 0)
        {
            printf("%d ", 0);
        }
        else
        {

            while (N[i] > 0)
            {
                int mod = N[i] % 10;
                printf("%d ", mod);

                N[i] = N[i] / 10;
            }
        }

        printf("\n");
    }

    return 0;
}
