#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char str[40];
    ptr = fopen("xyz.txt", "a");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("Enter the string that you want to add : ");
    fgets(str, 50, stdin);

    fputs(str, ptr);

    fclose(ptr);

    return 0;
}