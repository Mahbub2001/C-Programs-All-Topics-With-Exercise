#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);

    char S[10001];
    int j = 1, k = 2;

    while (T--)
    {
        scanf("%s", S);
        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[0] == '0')
            {
                if (S[i] != '0' || S[j] != '1' || S[k] != '0')
                {
                    flag = 1;
                    break;
                }
                else
                {
                    i += 3;
                    j += 3;
                    k += 3;
                }
            }
            else
            {
            }
        }
    }

    return 0;
}