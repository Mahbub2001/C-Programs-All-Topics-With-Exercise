#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    FILE *ptr = NULL;
    char str[30];
    char ch;

    ptr = fopen("xyz.txt", "w+");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("Enter the string that you want : ");
    fgets(str, 30, stdin);
    fputs(str, ptr);

    rewind(ptr);

    // while (!feof(ptr))
    // {
    //     ch = fgetc(ptr);
    //     printf("%c", ch);
    // }

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }

    fclose(ptr);

    return 0;
}