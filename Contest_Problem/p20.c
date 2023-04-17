#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n, k;
        scanf("%lld%lld", &n, &k);
        int flag = 0;
        int top = 0;

        if (k == 2)
        {
            printf("NO\n");
        }
        else
        {
            for (int j = 0; j <= n; j++)
            {
                if (flag == 1 || top == 1)
                {
                    break;
                }
                else
                {
                    for (int l = 0; l <= n; l++)
                    {
                        if (2 * j + k * l == n)
                        {
                            flag = 1;
                            printf("YES\n");
                            break;
                        }
                        else if (j == n && flag == 0)
                        {
                            printf("NO\n");
                            top = 1;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}