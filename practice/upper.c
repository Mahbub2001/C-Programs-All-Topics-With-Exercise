#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string that you want : ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("The updated string is : ");
    puts(str);

    return 0;
}