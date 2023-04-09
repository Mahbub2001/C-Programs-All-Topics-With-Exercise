#include<stdio.h>

void fun(int n)
{
     if (n <= 0)
     {
        return;
     }
     else
     {
         printf("%d\n",--n);
         fun(--n);
         printf("%d\t",n--);
         fun(n);
     }
}

int main()
{
    int n = 5;
    fun(n);
}