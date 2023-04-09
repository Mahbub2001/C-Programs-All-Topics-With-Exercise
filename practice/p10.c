// #include <stdio.h>
// int main()
// {
//     int number,count=0;
//     printf("Enter the number that you want to check : ");
//     scanf("%d", &number);

//     for (int i = 2; i < number; i++)
//     {
//        if(number % i==0){
//            count ++;
//            break;
//        }

//     }
//     if(count == 0){
//         printf("It's a prime number  ");
//     }
//     else
//     {
//         printf("It's not a prime number ");
//     }
    
//     return 0;
// }

#include<stdio.h>
int main ()
{
       int number,count;
       printf("Enter the number that want to check : ");
       scanf("%d",&number);

       for (int i = 2; i < number; i++)
       {
           if (number % i == 0)
           {
               count ++;
               break;
           }
           
       }
       if (count == 0)
       {
           printf("It's a prime number ");
       }
       else{
           printf("It's not a prime number ");
       }
  
    return 0;
}