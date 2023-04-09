#include <stdio.h>
int main()
{
    int marks[4];

    for (int i = 1; i <= 4; i++)
    {
        printf("Enter number %d is : ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 1; i <= 4; i++)
    {
        printf("The number %d is %d\n", i, marks[i]);
    }

    return 0;
}