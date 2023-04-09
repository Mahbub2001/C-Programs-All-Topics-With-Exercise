#include<stdio.h>
int main ()
{
        int number,i,j;
        printf("Enter the number that you want: ");
        scanf("%d",&number);

        for (i = 1; i <= 10; i++)
        {
           for (j = 1; j <= number; j++)
           {
              printf("%d X %d = %d, ",i,j,i*j);
           }
             printf(" \n");
        }
          
    return 0;
}