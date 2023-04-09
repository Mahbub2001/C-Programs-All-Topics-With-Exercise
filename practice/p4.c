#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number that you want to multiplication : ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d, ", number, i, number * i);
    }
    return 0;
}

