#include <stdio.h>
int main()
{
    int numbers[100], n, pos = -1;
    printf("Enter the value of numbers that you want to store : ");
    scanf("%d", &n);

    printf("Enter the numbers : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int value;
    printf("Enter the value that you want to check : ");
    scanf("%d", &value);

    for (int j = 0; j < n; j++)
    {
        if (value == numbers[j])
        {
            pos = j + 1;
            break;
        }
    }

    if (pos == -1)
    {
        printf("There no such number that you input ....");
    }
    else
    {
        printf("Find the number ....The position is %d", pos);
    }

    return 0;
}