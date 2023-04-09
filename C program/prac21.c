#include<stdio.h>
int main()
{
     int positive=0,negative=0;
     int numbers[5];
      for (int i = 1; i <= 5; i++)
      {
          printf("The number %dst is : ",i);
          scanf("%d",&numbers[i]);
      }

     for (int i = 1; i <= 5; i++)
     {
       if (numbers[i]>0)
       {
           positive++;
       }else if (numbers[i]<0)
       {
           negative++;
       }      
     }
      printf("The positive number value is : %d",positive);
      printf("the negative number value is : %d",negative);

    return 0;
}