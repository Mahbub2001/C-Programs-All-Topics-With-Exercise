#include <stdio.h>
int main()
{
    char text[50];
    int num1, num2, num3;
    int sum = 0;

    printf("Input numbers that you want  : ");
    
    fgets(text, sizeof(text), stdin);
    sscanf(text, "%d, %d, %d", &num1, &num2, &num3);
   
    sum = num1 + num2 + num3;
 
    printf("The sum of three numbers : %d\n", sum);
    return (0);
}