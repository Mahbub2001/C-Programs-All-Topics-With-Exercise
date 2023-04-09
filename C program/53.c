// 1.	Write a program to compute the following series using while loop: 52+92+152+232+....+n2
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int numbers, sum = 0, k = 5, l = 2;
//     printf("Enter the end number to count = ");
//     scanf("%d", &numbers);

//     int i = 1;
//     while (i <= numbers)
//     {
//         sum = sum + pow(k, 2);
//         k = k + l * 2;
//         l++;
//         i++;
//     }

//     printf("The sum is = %d", sum);
//     return 0;
// }

// 2.	Write a program that computes the following series using for loop: 10000+2000+400+…+8
// #include <stdio.h>
// int main()
// {
//     int numbers, sum = 0;
//     for (int i = 10000; i >= 8; i /= 5)
//     {
//         printf("%d ", i);
//         sum += i;
//     }
//     printf("\n%d\n", sum);
//     printf("The sum is = %d", sum+8);
//     return 0;
// }

// 3.	Write a program that takes a minimum number, a maximum number, and common difference and prints the sum of the arithmetic series between them.
// #include <stdio.h>

// int main() {

//     int a, n, d, tn, i;
//     int sum = 0;

//     printf(" Please Enter First Number of an A.P Series:  ");
//     scanf("%d", &a);
//     printf(" Please Enter the Total Numbers in this A.P Series:  ");
//     scanf("%d", &n);
//     printf(" Please Enter the Common Difference:  ");
//     scanf("%d", &d);

//     sum = (n * (2 * a + (n - 1) * d)) / 2;
//     tn = a + (n - 1) * d;
//     i = a;
//     printf("\n The Sum of Series A.P. : ");
//     while(i <= tn)
//     {
//         if(i != tn)
//             printf("%d + ", i);
//         else
//             printf("%d = %d", i, sum);
//         i = i + d;
//     }
//     printf("\n");
//     return 0;
// }

// 4.	Write a program that takes a minimum number, a maximum number, and common ratio and prints the sum of the geometric series between them.
// #include <stdio.h>
// #include<math.h>
// int main() {

//     int a, n, r, value, i;
//     float sum = 0;

//     printf(" Please Enter First Number of an G.P Series:  ");
//     scanf("%d", &a);
//     printf(" Please Enter the Total Numbers in this G.P Series:  ");
//     scanf("%d", &n);
//     printf(" Please Enter the Common Ratio:  ");
//     scanf("%d", &r);

//     value = a;
//     printf("G.P Series  :  ");
//     for(i = 0; i < n; i++)
//     {
//         printf("%d  ", value);
//         sum = sum + value;
//         value = value * r;
//     }
//     printf("\n The Sum of Geometric Progression Series =  %f\n", sum);
//     return 0;
// }

// 5.	Write a C program to print the multiplication table (নামতা) of any given integer number.

// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter number to print the multiplication table of: ");
//     scanf("%d", &number);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", number, i, number * i);
//     }

//     return 0;
// }

// 6.	Write a C program to compute the value of nPr = n*(n-1)*(n-2)*…*(n-r+1), read n and r from user.

// #include <stdio.h>
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int nPr(int n, int r)
// {
//     return factorial(n) / factorial(n - r);
// }
// int main()
// {
//     int n, r;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Enter the value of r: ");
//     scanf("%d", &r);

//     printf("The value of %dP%d is %d", n, r, nPr(n, r));

//     return 0;
// }

// 7.	Write a C program to find power of any number using for loop.  Don’t use pow() function

#include <stdio.h>

int main()
{
    int base, exponent;
    long long power = 1;

    printf("Enter the base number : ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}