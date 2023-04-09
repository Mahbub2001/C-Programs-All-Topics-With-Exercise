#include<stdio.h>
int main ()
{
      int A[100], size,flag = 0,value,pos = -1;
      printf("Enter the size of the Array A : ");
      scanf("%d",&size);

      for (int i = 0; i < size; i++)
      {
          printf("[%d] = ",i);
          scanf("%d",&A[i]);
      }
      printf("Printing the elements of Array A : ");
      for (int i = 0; i < size; i++)
      {
          printf("%d ",A[i]);
      }
      

      printf("\nEnter the value that you want to search : ");
      scanf("%d",&value);
    
      for (int i = 0; i < size; i++)
      {
          if (value == A[i])
          {
              pos = i+1;
          }
          
      }
      if (pos == -1)
      {
          printf("Can't find the value that you search ");
      }
      else
      {
          printf("Find the value that you search .....The position is = %d",pos);
      }


    return 0;
}