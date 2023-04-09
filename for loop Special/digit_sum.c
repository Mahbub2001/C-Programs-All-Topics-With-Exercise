 #include<stdio.h>
 int main()
 {
     int number,sum;

     printf("Enter any number: ");
     scanf("%d",&number);

     for(sum = 0; number!=0; number/=10)
     {
         sum += (number%10);
     }

     printf("Sum of digits =  %d\n",sum);

     return 0;
 }