#include<stdio.h>
int main()
{
      int number, a[10],i;
      printf("Enter the number that you convert : ");
      scanf("%d",&number);

      for ( i = 0; number > 0; i++)
      {
           a[i]=number%2;
           number=number/2;
      }
      for (int j = i-1; j >=0 ; j--)
      {
           printf("%d",a[j]);
      }

    return 0;
}

// Loop First Iteration: for(i = 0; Number > 0; i++)
// for(i = 0; 5 > 0; 0++) – condition true
// a[0] = number % 2 => 5 % 2 = 1
// number = number / 2 = 2.5

// Second Iteration: for(i = 1; 2 > 0; 1++)
// a[1] = 2.5 % 2 = 0
// number = 2.5 / 2 = 1.25

// Third Iteration: for(i = 2; 1 > 0; 2++)
// a[2] = 1.25 % 2 = 1
// number = 0

