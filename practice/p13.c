#include <stdio.h>
int main()
{
    int numbers, fibo, firstNumber = 0, secondNumber = 1;
    printf("Enter the numbers that you want : ");
    scanf("%d", &numbers);

    for (int i = 0; i <= numbers; i++)
    {
        if (i <= 1)
        {
            fibo = i;
        }
        else
        {
            fibo = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = fibo;
        }
        printf("%d ", fibo);
    }

    return 0;
}

