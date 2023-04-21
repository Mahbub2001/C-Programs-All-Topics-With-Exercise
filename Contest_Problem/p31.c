#include <stdio.h>
int main()
{
    char S[1001];
    scanf("%s", S);
    int count[26] = {0};
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            count[S[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a' + i, count[i]);
    }

    return 0;
}