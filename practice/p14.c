// Write a program in C to display the number in reverse order.
#include <stdio.h>
int main()
{
    int number, sum = 0, r;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    for (int i = number; number != 0; number = number / 10)
    {
        r = number % 10;
        sum = sum * 10 + r;
    }

    printf("The reverse number is = %d", sum);

    return 0;
}