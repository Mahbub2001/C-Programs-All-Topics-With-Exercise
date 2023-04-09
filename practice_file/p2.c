#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char str[100];
    char ch;

    ptr = fopen("xyz.txt", "r");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    while (!feof(ptr))
    {
        ch = getc(ptr);
        printf("%c",ch);
    }
    
   
    // printf("%s", str);

    fclose(ptr);

    return 0;
}