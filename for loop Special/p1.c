#include <stdio.h>
int main()
{
    int number;
    printf("Enter the enumber that you want : ");
    scanf("%d", &number);

    for (int i = 1; number != 0; i++)
    {
        printf("%d  ",number%10);
        number = number/10;
    }
    

    return 0;
}