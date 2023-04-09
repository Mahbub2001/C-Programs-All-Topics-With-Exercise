#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    printf("Enter Number a = ");
    scanf("%lf",&a);

    double b;
    printf("Enter Number b = ");
    scanf("%lf",&b);
   
    double c;
    printf("Enter Number c = ");
    scanf("%lf",&c);

    double d= sqrt((b*b)-(4*a*c)); 

    double x1= (-b+d)/(2*a);
    printf("The number 1 is : %lf\n",x1);

    double x2= (-b-d)/(2*a);
    printf("The number 2 is : %lf\n",x2);

    return 0;
}