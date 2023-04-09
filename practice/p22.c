#include <stdio.h>
int main()
{
    int min, n, numbers[100];
    printf("Enter the value of number that to want to store :");
    scanf("%d", &n);

    printf("The numbers are : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }
    min = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (min > numbers[i])
        {
            min = numbers[i];
        }
    }
    printf("The minimum value is = %d ", min);

    return 0;
}