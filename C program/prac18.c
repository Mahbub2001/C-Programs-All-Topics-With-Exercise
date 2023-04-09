
// #include<stdio.h>
// int main()
// {

//     for (int i = 1; i <= 50; i++)
//     {
//         if (i % 2 == 0)
//         {
//           printf("%d ",i);
//         }
//     }

//     return 0;

// }
// #include <stdio.h>

// int main()
// {
//   int i, Number, count, min, max, a[100], prime[100];

//   printf("Enter the Minimum & Maximum Values\n");
//   scanf("%d %d", &min, &max);
//   Number = min;

//   for (int i = min; i <= max; i++)
//   {
//     scanf("%d", a[i]);
//   }

//   printf("Prime Numbers Between %d and %d are:\n", min, max);
//   while (Number <= max)
//   {
//     count = 0;
//     i = 2;
//     while (i <= a[i] / 2)
//     {
//       if (a[i] % i == 0)
//       {
//         count++;
//         break;
//       }
//       i++;
//     }
//     if (count == 0 && Number != 1)
//     {
//       prime[i] = a[i];
//     }
//     Number++;
//   }

//   for (int i = 0; i < 10; i++)
//   {
//     printf("%d ", prime[i]);
//   }

//   return 0;
// }
