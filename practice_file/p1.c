#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;
    char str[50];

    ptr = fopen("xyz.txt", "w");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("Enter the string : ");
    fgets(str, 50, stdin);

    fputs(str, ptr);

    fclose(ptr);

    return 0;
}