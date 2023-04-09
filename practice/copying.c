#include <stdio.h>
int main()
{
    char str1[100], str2[100],i;

    printf("The string1 is : ");
    fgets(str1, 100, stdin);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("The updated string  is = ");
    puts(str2);

    return 0;
}