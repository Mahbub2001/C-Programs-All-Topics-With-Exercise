// #include <stdio.h>
// int main()
// {
//     int n, f = 1;
//     printf("Enter the number that you want to factorial : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//   printf("%d", f);

//     return 0;
// }

// #include<stdio.h>

// int factorial(int num){

//    if (num == 1 || num == 0) //----------base----------
//    {
//      return 1;
//    }
//    else{
//      return (num * factorial(num -1)); //--------------recursion----------
//    }
// }
// int main ()
// {

//      int num;
//      printf("Enter the number that you want to factorial : ");
//      scanf("%d",&num);

//      printf("The number %d factorial is %d", num, factorial(num));

//   return 0;
// }

// #include <stdio.h>
// int main()
// {

//   long long int number, t = 9, sum=0;
//   printf("Enter the number that you want to sum : ");
//   scanf("%ld", &number);

//   for (int i = 1; i <= number; i++)
//   {
//     sum = sum + t;
//     printf("%ld ", t);
//     t = (t * 10) + 9;
//   }
//   printf("The sum is : %ld", sum);

//   return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     int number,t=1,sum=0,square;
//     printf("Enter the number that you want : ");
//     scanf("%d",&number);

//     for (int i = 1; i <= number; i++)
//     {
//       square=pow(t,2);
//       sum=sum+square;
//       printf("%d ",square);
//       t++;
//     }
//     printf("\nThe sum is : %d",sum);

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int number, t = 1, sum = 0;
//   printf("Enter the number : ");
//   scanf("%d", &number);

//   for (int i = 1; i <= number; i++)
//   {
//     sum = sum + t;
//     printf("%d ", t);
//     t = (t * 10) + 1;
//   }
//   printf("The sum is = %d", sum);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int number, sum;
//   printf("Enter the number that you want to check : ");
//   scanf("%d", &number);

//   for (int i = 1; i <= number; i++)
//   {
//     if (number % i == 0)
//     {
//       sum = sum + i;
//       printf("%d ", i);
//     }
//   }
//   printf("\nThe sum of divisor is = %d", sum);
//   if (sum == number)
//   {
//     printf("\nIt is a perfect number ");
//   }
//   else
//   {
//     printf("\nIt is not a perfect number ");
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int number1, number2, n, sum;

  printf("Enter the number1 that you start to check : ");
  scanf("%d", &number1);
  printf("Enter the number2 that you end to check : ");
  scanf("%d", &number2);

  for (n = number1; n <= number2; n++)
  {
    sum=0;
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        sum = sum + i;
      }
    }
    if (sum == n)
    {
      printf(" %d, ", n);
    }
  }
  return 0;
}

// #include <stdio.h>

// int main()
// {
//   int i, j, start, end, sum;

//   /* Input lower and upper limit from user */
//   printf("Enter lower limit: ");
//   scanf("%d", &start);
//   printf("Enter upper limit: ");
//   scanf("%d", &end);

//   printf("All Perfect numbers between %d to %d:\n", start, end);

//   /* Iterate from start to end */
//   for (i = start; i <= end; i++)
//   {
//     sum = 0;

//     /* Check whether the current number i is Perfect number or not */
//     for (j = 1; j < i; j++)
//     {
//       if (i % j == 0)
//       {
//         sum += j;
//       }
//     }

//     /* If the current number i is Perfect number */
//     if (sum == i)
//     {
//       printf("%d, ", i);
//     }
//   }

//   return 0;
// }