#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string that you want : ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("The updated string is : ");
    puts(str);

    return 0;
}
