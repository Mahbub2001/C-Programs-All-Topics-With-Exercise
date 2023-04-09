#include <stdio.h>
int main()
{
    int n, numbers[100];
    printf("Enter the terms number that you want to show : ");
    scanf("%d", &n);

    numbers[0] = 0;
    numbers[1] = 1;

    for (int i = 2; i < n; i++)
    {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}