#include <stdio.h>
void upper_string(char[]);

int main()
{
    char string[100];

    printf("Enter a string to convert it into upper case : ");
    fgets(string,100,stdin);

    upper_string(string);

    puts(string);

    return 0;
}

void upper_string(char s[])
{
    int c = 0;

    while (s[c] != '\0')
    {
        if (s[c] >= 'a' && s[c] <= 'z')
        {
            s[c] = s[c] - 32;
        }
        c++;
    }
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char string[1000];
   
//    printf("Input a string to convert to upper case\n");
//    fgets(string,30,stdin);
   
//    printf("The string in upper case: %s\n", strupr(string));
   
//    return  0;
// }