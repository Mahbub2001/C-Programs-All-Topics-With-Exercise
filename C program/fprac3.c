#include <stdio.h>

// function to find factorial of given number
int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

int main()
{
    int number;
    printf("Enter the value of number :");
    scanf("%d", &number);

    printf("Factorial of %d is %d", number, factorial(number));
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int c;
//     printf("Customer IDNO : \n");
//     scanf("%d", &c);

//     int cm;
//     printf("Customer NAME : \n");
//     scanf("%s", &cm);

//     double n;
//     printf("Unit Consumed : \n");
//     scanf("%lf", &n);

//     if (n >= 100 && n <= 199)
//     {
//         double a = n * 1.20;
//         printf("Amount charges @Rs.1.20 per unit : %lf", a);
//     }
//     else if (n >= 200 && n < 400)
//     {
//         double a = n * 1.50;
//         printf("Amount charges @Rs.1.50 per unit : %lf\n", a);
//         if (a>400)
//         {
//         double s;
//         s = a * 0.15;
//         printf("Surcharge Amount  : %lf\n", s);

//         double h = a + s;
//         printf("Net amount paid by the customer : %lf\n", h);
            
//         }
        
//     }
//     else if (n >= 400 && n < 600)
//     {
//         double a = n * 1.80;
//         printf("\nAmount charges @Rs.1.80 per unit : %lf\n", a);

//         double s;
//         s = a * 0.15;
//         printf("Surcharge Amount  : %lf\n", s);

//         double h = a + s;
//         printf("Net amount paid by the customer : %lf\n", h);
//     }
//     else if (n >= 600)
//     {
//         double a = n * 2.00;
//         printf("Amount charges @Rs.2.00 per unit : %lf\n", a);

//         double s;
//         s = a * 0.15;
//         printf("Surcharge Amount  : %lf\n", s);

//         double h = a + s;
//         printf("Net amount paid by the customer : %lf\n", h);
//     }
//     else
//     {
//         printf("Amount charges : 100.00");
//     }

//     return 0;
// }