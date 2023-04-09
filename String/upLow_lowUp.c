#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Write the string that you want : ");
    fgets(str, 30, stdin);
    printf("The string that you you entered is : ");
    puts(str);

    int len = strlen(str);
    printf("The lenght is = %d\n", len);

    for (int i = 0; i < len; i++)
    {

        // Checks whether a character is upper case character
        if (isupper(str[i]))
        {
            // Convert that charcter to lower case
            str[i] = tolower(str[i]);
        }
        // Checks whether a character is lower case character
        else if (islower(str[i]))
        {
            // Convert that charcter to upper case
            str[i] = toupper(str[i]);
        }
    }
    printf("The updated string is :  ");
    puts(str);

    return 0;
}

