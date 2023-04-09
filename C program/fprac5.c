// #include<stdio.h>
// int main ()
// {
//     int number,a[50],i;
//     printf("Enter the number that you want to convert : ");
//     scanf("%d",&number);

//     for( i = 0; number > 0; i++){
//         a[i]=number%2;
//         number=number/2;
//     }
//     for(int j = i-1 ; j>=0 ; j--){
//         printf("%d",a[j]);
//     }

//     return 0;
// }

#include<stdio.h>
 
 int convert(){
       int number;
       printf("Enter the number that you want to convert : ");
       scanf("%d",&number);
       return number;
 }
 
int main()
{
     int i,a[50];
     int c=convert();

     for(i = 0; c > 0; i++){
         a[i]=c%2;
         c=c/2;
     }

     for (int j = i-1; j >= 0 ; j--)
     {
        printf("%d",a[j]);
     }
     

    return 0;
}