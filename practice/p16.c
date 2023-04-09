// #include<stdio.h>

// int func(int num){

//      int count = 2;
//      while (num)
//      {
//          count ++;
//          num >>= 2 ;
//      }
//      return count;

// }

// int main ()
// {
//   printf("%d",func(435));

//     return 0;
// }

// #include <stdio.h>

// int fun()
// {
//     static int number = 16;
//     return number--;
// }

// int main()
// {
//     for (fun(); fun(); fun())
//     {
//         printf("%d ", fun());
//     }

//     return 0;
// }

#include <stdio.h>
int fun1(int b);
int fun2(int b);
int a = 5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
    return 0;
}
int fun1(int b)
{
    b = b + 10;
    b = fun2(b);
    return b;
}
int fun2(int b)
{
      int c;
      c = a+b;
      return c;
}

