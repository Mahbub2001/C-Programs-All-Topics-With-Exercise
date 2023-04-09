// #include<stdio.h>
// #include<math.h>
// void square(){

//     int number;
//     printf("Enter the number : ");
//     scanf("%d",&number);

//     int sq=pow(number,2);
//     printf("The value of the number square is : %d",sq);

// }

// int main()
// {

//     square();

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// #include<math.h>

//  int square(){
//       int number;
//       printf("Enter the number that you want to square : ");
//       scanf("%d",&number);

//       return number;

//  }

// int main ()
// {
//       int sq;

//       sq= square();

//       sq=pow(sq,2);
//       printf("The value of square is = %d",sq);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// #include<math.h>

// int square(int number){

//       number=pow(number,2);
//       printf("The value of the square is = %d",number);

// }

// int main()
// {

//     int number;
//     printf("Enter the number that you want to square : ");
//     scanf("%d",&number);

//     square(number);

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int square(int number)
{

    return (pow(number, 2));
}

int main()
{
    int number,result;
    printf("Enter the number that you want to square : ");
    scanf("%d",&number);

    result=square(number);
    printf("The value after square = %d",result);

    return 0;
}