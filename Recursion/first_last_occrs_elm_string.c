#include <stdio.h>
#include<string.h>
static int first = -1;//static nite hbe jate kre constant thake;
static int last = -1;

void find(char str[30], int index, char element)
{
    if (index == strlen(str))
    {
        printf("The first index is : %d",first);
        printf("\nThe last index is : %d",last);
        return;
    }

    char curr_carracter = str[index];
    if (curr_carracter == element)
    {
        if (first == -1)
        {
            first = index;
        }
        else
        {
            last = index;
        }
    }
    find(str,index + 1,element);
}

int main()
{
    char str[30],element;
    printf("Enter the string that you want : ");
    fgets(str,30,stdin);

    printf("Enter the carracter that you want to check : ");
    scanf("%c",&element);

    find(str, 0, element);

    return 0;
}
