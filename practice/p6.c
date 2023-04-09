#include <stdio.h>
int main()
{
    int numbers, sum = 0;
    printf("Enter the numbers that to sum : ");
    scanf("%d", &numbers);

    for (int i = 1; i <= numbers; i+=2)
    {
        sum = sum + i;

    }
    printf("The sum is = %d",sum);

    return 0;
}