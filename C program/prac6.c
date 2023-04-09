#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a = ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b = ");
    scanf("%d",&b);

    int c;
    printf("Enter the value of c = ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is greatest",a);
    }else if(b>a && b>c){
        printf("%d is greatest",b);
    }else if(c>a && c>b){
        printf("%d is greatest",c);
    }else{
        printf("All are equal");
    }


    return 0;
}
