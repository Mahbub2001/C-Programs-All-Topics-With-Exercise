// #include<stdio.h>

// int fun(int a,int b){
//      return a+b;
// }
// int main()
// {
//        int c, a, b;
//        printf("Enter the two number : ");
//        scanf("%d%d",&a,&b);

//        c=fun(a,b);
//        printf("The value of c is = %d",c);

//     return 0;
// }

// #include<stdio.h>

// int fun(int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');
//     }

// }

// int main()
// {
//     int m;
//     printf("Enter the number of star : ");
//     scanf("%d",&m);
//     fun(m);

//     return 0;
// }

// #include <stdio.h>

// int takeNumber()
// {
//     int i;
//     printf("Enter the number that you want to show = ");
//     scanf("%d", &i);

//     return i;
// }

// int main()
// {
//     int c;
//     c = takeNumber();
//     printf("The number is that you want = %d", c);

//     return 0;
// }

#include<stdio.h>

void dear(){
     int a,b;
     printf("Enter the two number : ");
     scanf("%d%d",&a,&b);
     printf("The value of sum is =%d",a+b);

}

int main()
{

     dear();

    return 0;
}