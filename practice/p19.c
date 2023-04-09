#include <stdio.h>
int main()
{
    int n, number[100];
    printf("Enter the numbers that you want to store : ");
    scanf("%d", &n);

    printf("Enter the numbers : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("The numbers are : ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", number[j]);
    }

    return 0;
}