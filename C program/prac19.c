#include <stdio.h>
int main()
{

    float numbers[5];
    int negative=0, positive=0;

    printf("Enter the first number : \n");
    scanf("%f", &numbers[0]);

    printf("Enter the second number : \n");
    scanf("%f", &numbers[1]);

    printf("Enter the third number : \n");
    scanf("%f", &numbers[2]);

    printf("enter the fourth number : \n");
    scanf("%d", &numbers[3]);

    printf("Enter the fifth number : \n");
    scanf("%d", &numbers[4]);

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > 0)
        {
            positive++;
        }
        else if (numbers[i] < 0)
        {
            negative++;
        }
    }
    printf("The positive numbers are : %d\n",positive);
    printf("The negative values are : %d\n",negative);

    return 0;
}