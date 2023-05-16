#include <stdio.h>
int main()
{
    char S[10001];
    scanf("%s", &S);
    int count = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {

        /* This code is counting the number of vowels (a, e, i, o, u) in a given string `S`. It checks each
        character of the string `S` and if the character is a vowel, it increments the `count` variable. */
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}