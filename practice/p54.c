#include <stdio.h>
int main()
{
    char str1[100], str2[100], flag = 0;

    printf("The string1 is : ");
    fgets(str1, 100, stdin);

    printf("The string2 is : ");
    fgets(str2, 100, stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("The string is not equal ");
    }
    else
    {
        printf("The string is equal");
    }

    return 0;
}