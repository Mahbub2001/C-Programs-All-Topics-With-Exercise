#include<stdio.h>
int main()
{
     float a;
     printf("Enter the first Number : \n");
     scanf("%f",&a);

     float b;
     printf("Enter the second Number : \n");
     scanf("%f",&b);

     float c;
     printf("Enter the third Number : \n");
     scanf("%f",&c);

     if ((a+b)>c && (b+c)>a && (c+a)>b)
     {
         printf("The value of perameter is = %f", (a+b+c));
     }else{
         printf("Not possible to creat a triangle");
     }
     


    return 0;
}