#include <stdio.h>
//without argument & without return:
void fun(void){
    int a=7,b=8,fun=0;
    fun=a+b;
    printf("%d\n",fun);
}

int sum(int a, int b);
// With argument & without return value:
void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}
// Without argument & with return value:
int takeNumber()
{
    int i;
    printf("Enter the value : \n");
    scanf("%d", &i);
    return i;
}
    int main()
    {
        int c;  
        int a = 1;
        int b = 2;

        // With argument & without return value 
        printStar(7);
        // Without argument & with return value
        c = takeNumber();
        printf("The taken number is %d\n", c);
        // With argument & with return value
        c = sum(a, b);
        printf("the value is %d\n", c);
        // without argument & without return
        fun();

        return 0;
    }

    // With argument & with return value
    int sum(int a, int b)
    {
        return a + b;
    }
