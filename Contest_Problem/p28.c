#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001];
    fgets(S, 1001, stdin);
    int capital = 0, small = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            capital++;
        }
        else if (S[i] >= 'a' && S[i] <= 'z')
        {
            small++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}