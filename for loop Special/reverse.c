// C Exercises: Display the number in reverse order
#include <stdio.h>
int main()
{
    int number, r, sum = 0;
    printf("Enter the number that want to reverse : ");
    scanf("%d", &number);

    for (int i = number; number != 0; number = number / 10)
    {
        r = number % 10;
        sum = sum * 10 + r;
    }
    printf("The reverse number is = %d",sum);

    return 0;
}