#include <stdio.h>
int main()
{
    int numbers[5], total;

    printf("Enter the first Number = \n");
    scanf("%d", &numbers[0]);

    printf("enter the second Number= \n");
    scanf("%d", &numbers[1]);

    printf("Enter the third Number= \n");
    scanf("%d", &numbers[2]);

    printf("Enter the fourth Number= \n");
    scanf("%d", &numbers[3]);

    printf("Enter the fifth Number= \n");
    scanf("%d", &numbers[4]);

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            total += numbers[i];
        }
    }

    printf("The sum is = %d", total);

    return 0;
}