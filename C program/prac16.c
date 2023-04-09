#include <stdio.h>
int main()
{
   
     int x;
     printf("Enter the vlaue of x : ");
     scanf("%d",&x);

     int y;
     printf("Enter value of y : \n");
     scanf("%d",&y);

     if(x>y){
            int temp=x;
            x=y;
            y=temp;
     }
     if(y%x==0){
         printf("Yes it is multipled");
     }else{
         printf("No it is not multipled");
     }


    return 0;
}