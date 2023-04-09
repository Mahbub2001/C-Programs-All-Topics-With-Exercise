#include <stdio.h>
int main()
{
    int a = 5;
    float b = 1.11;
    char c = 'o';

    void *vp;

    vp = &a;

    //  printf("%d   ",*vp);...it cannot be run because it has no data type....So we have to typecast it;

    printf("%d    ", *(int *)vp); // typecasting

    vp = &b;
    printf("%f    ", *(float *)vp); // type casting

    vp = &c;
    printf("%c    ", *(char *)vp); // typecasting

    return 0;
}