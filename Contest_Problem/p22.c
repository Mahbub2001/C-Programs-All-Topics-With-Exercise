#include <stdio.h>

int main()
{
    char S[1000001];
    fgets(S, sizeof(S), stdin);

    int sum = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= '0' && S[i] <= '9')
        {
            sum += S[i] - '0';
        }
    }
    printf("%d", sum);

    return 0;
}
