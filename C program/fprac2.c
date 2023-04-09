#include <stdio.h>

int checkOddEven(int n1)
{
    return (n1 % 2 != 0);
}

int main()
{
    int n1;
    printf("Input any number : ");
    scanf("%d", &n1);

    if (checkOddEven(n1))
    {
        printf("The entered number is odd.\n\n");
    }
    else
    {
        printf("The entered number is even.\n\n");
    }
    return 0;
}


// #include<stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("%c is alphabet.", ch);
//     }
//     else if(ch >= '0' && ch <= '9')
//     {
//         printf("%c is digit.", ch);
//     }
//     else 
//     {
//         printf("'%c' is a special character..", ch);
//     }

//     return 0;
// }