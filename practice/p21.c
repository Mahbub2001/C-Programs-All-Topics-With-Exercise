#include <stdio.h>
int main()
{
    int numbers[100], n, max;
    printf("Enter the numbers of storing data : ");
    scanf("%d", &n);

    printf("Enter the numbers : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (int j = 1; j < n; j++)
    {
        if (max < numbers[j])
        {
            max = numbers[j];
        }
    }
    printf("The maximum value is = %d", max);

    return 0;
}
