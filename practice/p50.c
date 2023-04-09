// 1.	Write a C program to read an integer from user and output its last and first digit. Hint: Like practice 2 & 3,
// reduce the number by dividing it (by 10) again and again (in a loop) until you reach the first digit.

// #include<stdio.h>
// int main ()
// {
//     int number;
//     printf("Enter the number that you want : ");
//     scanf("%d",&number);

//     int lastDigit = number % 10;
//     //Find the first digit by dividing n by 10 until n greater then 10
//     while(number >= 10)
//     {
//         number = number / 10;
//     }
//     int firstDigit = number;

//     printf("The first digit of the number is : %d\n",firstDigit);
// 	printf("The last digit of the number is : %d",lastDigit);

//     return 0;
// }

// 2.	Write a C program to check whether an input number is a perfect number or not. A perfect number is a positive integer which is equal to the sum of its proper
// positive factors. For e.g. 6 is a perfect number; because proper factors of 6 are 1, 2, 3 and 1+2+3 = 6. Also, 28 is a perfect number since sum of its factors = 1+2+4+7+14 = 28.

// #include <stdio.h>

// void main()
// {
//     int number,sum;

//     printf("Input the  number : ");
//     scanf("%d", &number);
//     sum = 0;
//     printf("The positive divisor  : ");
//     for (int i = 1; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             sum = sum + i;
//             printf("%d  ", i);
//         }
//     }
//     printf("\nThe sum of the divisor is : %d", sum);
//     if (sum == number)
//         printf("\nSo, the number is perfect.");
//     else
//         printf("\nSo, the number is not perfect.");
//     printf("\n");
// }

// 1.	Write a C program to enter any number from user and find the reverse of a given number using loop. Sample input/output (bold ones are user inputs):
// Enter a number: 2345
// Reverse of 2345 is: 5432

// #include <stdio.h>

// int main()
// {
//     int num, r, sum = 0;

//     printf("Input a number: ");
//     scanf("%d", &num);

//     for (int i = num; num != 0; num = num / 10)
//     {
//         r = num % 10;
//         sum = sum * 10 + r;
//     }
//     printf("The number in reverse order is : %d \n", sum);

//     return 0;
// }

// 2.	Write a C program to read a number from user and check whether given number is a palindrome or not.
// A number is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome but 2345 is not.

// #include <stdio.h>

// void main()
// {
//     int number, r, sum = 0, i;

//     printf("Input a number: ");
//     scanf("%d", &number);

//     for (i = number; number != 0; number = number / 10)
//     {
//         r = number % 10;
//         sum = sum * 10 + r;
//     }
//     if (i == sum)
//         printf("%d is a palindrome number.\n", i);
//     else
//         printf("%d is not a palindrome number.\n", i);
// }

// 3.	Write a C program to read any integer from user and compute the reverse of given number. Also output whether the reverse number is prime or not. Sample Input/Output:

// #include <stdio.h>

// int main()
// {
//     int number, r, sum = 0, flag = 0;

//     printf("Input a number: ");
//     scanf("%d", &number);

//     for (int i = number; number != 0; number = number / 10)
//     {
//         r = number % 10;
//         sum = sum * 10 + r;
//     }
//     int c = sum;
//     printf("The number in reverse order is : %d \n", c);

//     if (c == 0 || c == 1)
//     {
//         flag = 1;
//     }
//     for (int i = 2; i <= c / 2; i++)
//     {
//         if (c % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("It's a prime number ");
//     }
//     else
//     {
//         printf("It's not a prime number ");
//     }

//     return 0;
// }

// 4.	Write a C program to compute the sum of digits of an input number and check if this sum is a prime or not.
// Sample Input/Output:

// #include <stdio.h>
// int main()
// {
//     int number, r, sum = 0,flag = 0;
//     printf("Enter the number : ");
//     scanf("%d", &number);

//     for (int i = number; number != 0; number = number / 10)
//     {
//         r = number % 10;
//         sum = sum + r;
//     }
//     printf("The sum is = %d", sum);
//     int c = sum;

//     if (c == 0 || c == 1)
//     {
//         flag = 1;
//     }
//     for (int i = 2; i <= c / 2; i++)
//     {
//         if (c % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("\nIt's a prime number ");
//     }
//     else
//     {
//         printf("\nIt's not a prime number ");
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int numbers, sum = 0, k = 5, l = 2;
    printf("Enter the end number to count = ");
    scanf("%d", &numbers);

    for (int i = 1; i <= numbers; i++)
    {
        // printf("%d ", k);
        sum = sum + pow(k, 2);
        k = k + l * 2;
        l++;
    }
    printf("The sum is = %d", sum);
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int i, f = 1, num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (i = num; i >= 1; i--)
//         f = f * i;

//     printf("Factorial of %d is: %d", num, f);
//     return 0;
// }