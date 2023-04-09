#include <stdio.h>
void swapnum(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int v1, v2;
    printf("\nValue of v1 is: ");
    scanf("%d",&v1);
    printf("\nValue of v2 is: ");
    scanf("%d",&v2);

    /*calling swap function*/
    swapnum(&v1, &v2);

    printf("\nAfter swapping:");
    printf("\nValue of v1 is: %d", v1);
    printf("\nValue of v2 is: %d", v2);
}