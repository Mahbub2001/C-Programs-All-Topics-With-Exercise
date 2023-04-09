// #include <stdio.h>
// int main()
// {
//     int number, sum = 0;
//     printf("Enter the that you want : ");
//     scanf("%d", &number);

//     for (int i = 1; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     printf("\nThe sum of divisor is = %d", sum);
//     if (sum == number)
//     {
//         printf("\nIt is a perfect number");
//     }
//     else
//     {
//         printf("\nIt is not a perfect number");
//     }
//         return 0;
//     }

// #include <stdio.h>
// int main()
// {
//     int start, end, sum;
//     printf("Enter the start number: ");
//     scanf("%d", &start);

//     printf("Enter the end number : ");
//     scanf("%d", &end);

//     for (int i = start; i <= end; i++)
//     {
//         sum = 0;
//         for (int j = 1; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 sum = sum + j;
//             }
//         }
//         if (sum == i)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//      int number,sum=0,r,i;
//      printf("Enter the number that you want to check :");
//      scanf("%d",&number);

//      for (i=number; number!=0; number=number/10)
//      {
//          r=number%10;
//          sum=sum+pow(r,3);
//      }

//      if (i==sum)
//      {
//         printf("It is a armstrong number ");
//      }
//      else
//      {
//          printf("It is not a armstrong number ");
//      }
//  return 0;
// }

/**
 * C program to print all Armstrong numbers between a given range
 */

#include <stdio.h>
#include<math.h>

/* Function declarations */
int isArmstrong(int num);
void printArmstrong(int start, int end);

int main()
{
    int start, end;

  
    printf("Enter lower limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print armstrong numbers: ");
    scanf("%d", &end);

    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);

    return 0;
}


int isArmstrong(int num)
{
    int temp, lastDigit, sum;
    sum = 0;

    for (temp = num; temp != 0; temp /= 10)
    {
        lastDigit = temp % 10;
        sum += pow(lastDigit,3);
    }

 
    if (num == sum)
        return 1;
    else
        return 0;
}

void printArmstrong(int start, int end)
{

for (;start <= end; start++)
{
    if (isArmstrong(start))
        {
            printf("%d, ", start);
        }
}

}