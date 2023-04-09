#include <stdio.h>
char s[100]; ////global variable.........
void countVowelOrConsonant(int *vowelCount, int *consonantCount);
int main()
{
    printf("Enter the string: ");
    fgets(s, 100, stdin);
    int vowelCount = 0, consonantCount = 0;
    countVowelOrConsonant(&vowelCount, &consonantCount);
    printf("Number of the Vowels in input String is: %d\n", vowelCount);
    printf("Number of the Consonants in input String is: %d", consonantCount);
    return 0;
}
void countVowelOrConsonant(int *vowelCount, int *consonantCount)
{
    char *ptr = s;
    while (*ptr != '\0')
    {
        if ((*ptr >= 65 && *ptr <= 90) || (*ptr >= 97 && *ptr <= 122))
        {
            if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' ||
                *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
                *ptr == 'o' || *ptr == 'u')
            {
                (*vowelCount)++; //////////
            }
            else
            {
                (*consonantCount)++; /////////////////
            }
        }
        ptr++;
    }
}

