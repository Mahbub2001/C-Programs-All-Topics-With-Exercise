#include <stdio.h>
int main()
{
    int number, f = 1;
    printf("Enter the number that want to factorial : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        f = f * i;
    }
    printf("The number %d factorial is %d", number, f);

    return 0;
}

// #include<stdio.h>
// int main ()
// {
//        int number,sum;
//        printf("Enter the the number : ");
//        scanf("%d",&number);

//        for (int i = 2; i <= number ; i+=2)
//        {
//            sum=sum + i;
//            printf("%d ",i);
//        }
//        printf("The sum is = %d",sum);


//     return 0;
// }