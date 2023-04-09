#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string that you want : ");
    fgets(str, 100, stdin);

    int len = strlen(str);

    int ch;
    for (int i = 0; i < len / 2; i++)
    {
        ch = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = ch;
    }

    printf("The updated string is : ");
    puts(str);

    return 0;
}