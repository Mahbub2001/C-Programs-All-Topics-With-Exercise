// #include <stdio.h>
// int main()
// {
//     int sum;

//     for (int i = 1; i < 10; i++)
//     {
//         sum = sum + i;
//         printf("%d", i);
//     }
//     printf("The sum is : %d",sum);

//     return 0;
// }

// #include<stdio.h>
// int main ()
// {
//       int n,sum=0;
//       printf("how much number do you want to sum : ");
//       scanf("%d",&n);

//       for (int i = 1; i <= n; i++)
//       {
//           sum = sum+i;
//           printf("%d ",i);
//       }
//        printf("\nThe sum is : %d\n",sum);

//     return 0;
// }

// #include<stdio.h>
// int main ()
// {
//        int n,sum=0,avg;

//        printf("Enter the number : ");
//        scanf("%d",&n);

//        for (int i = 1; i <= n; i++)
//        {
//            sum = sum + i;
//            printf(" %d ",i);
//        }
//        printf("\nThe sum is = %d\n",sum);
//        printf("The average is : %f",(1.0)*sum/n);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, cube,m;
//     printf("Enter the number that want to cube : ");
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         cube = pow(i, 3);
//        printf("The number %d ; cube is %d\n", i, cube);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main ()
// {
//     int number;
//     printf("Enter the number that you want to multiplication : ");
//     scanf("%d",&number);

//     for (int i = 1; i <= 10; i++)
//     {
//        printf("%d X %d = %d\n",number,i,(number*i));
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int j, i, n;
    printf("Input upto the table number starting from 1 : ");
    
    scanf("%d", &n);
    printf("Multiplication table from 1 to %d \n", n);
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2dx%2d = %2d, ", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main ()
// {
//      int n , number ,sum=0;
//      printf("Enter the value of n : ");
//      scanf("%d",&n);

//      for (int i = 1; i <= 10; i++)
//      {
//         printf("number - %d\n",i);
//         scanf("%d",&number);
//         sum =sum + number;
//      }
//        printf("The sum is = %d\n",sum);
//        printf("The avg is = %d\n",sum/n);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("Enter the number : \n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i += 2)
//     {
//         sum = sum + i;
//         printf("%d, ", i);
//     }
//     printf("\nThe sum of the odd number is = %d", sum);
//     return 0;
// }


// #include <stdio.h>

// int stars(int rows)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int reversestars(int rows)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j <= rows - i - 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int rows, type;

//     printf("Enter number 0 for stars & Enter number 1 for reverseStars : ");
//     scanf("%d", &type);

//     printf("Enter the rows that you want : ");
//     scanf("%d", &rows);

//     switch (type)
//     {
//     case 0:
//         stars(rows);
//         break;
//     case 1:
//         reversestars(rows);
//         break;

//     default:
//         printf("You choose wrong");
//         break;
//     }

//     return 0;
// }