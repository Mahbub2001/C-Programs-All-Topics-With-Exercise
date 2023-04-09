#include<stdio.h>
int main ()
{
       int numbers[100],n,pos = -1,value;

       printf("Enter the numbers of Array : ");
       scanf("%d",&n);
    
       printf("Enter the elements of the array : \n");
       for (int i = 0; i < n; i++)
       {
           printf("Enter Array [%d] = ",i);
           scanf("%d",&numbers[i]);   
       }

       printf("Printing the elelments of Array : \n");
       for (int i = 0; i < n; i++)
       {
           printf("Array [%d] = %d\n",i,numbers[i]);
       }
       
       printf("Enter the number that you want to find : \n");
       scanf("%d",&value);

       for (int i = 0; i < n; i++)
       {
           if(numbers[i] == value){
               pos = i + 1;
               break;
           }
       }
       if (pos == -1)
       {
           printf("Can't find the number in the Array ");
       }
       else{
           printf("Find the number that you finding......The position is = %d",pos);
       }
       

    return 0;
}