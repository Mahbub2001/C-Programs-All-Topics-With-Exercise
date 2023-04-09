#include <stdio.h>
int main()
{
    int n, numbers[100], Array2[100];
    printf("Enter the value of numbers that you want to store : ");
    scanf("%d", &n);

    printf("Enter the numbers : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("The numbers of Array1 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        Array2[i] = numbers[i];
    }

    printf("\nThe numbers of Array2 is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", Array2[i]);
    }

    return 0;
}