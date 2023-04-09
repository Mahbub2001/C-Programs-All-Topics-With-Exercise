#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your Marks: ");
    scanf("%d",&marks);
   
    switch (marks)
    {
    case 93 ... 100:
        printf("A Excellent\n");
        break;
    case 90 ... 92:
        printf("A-\n");
        break;
    case  87 ... 89:
        printf("B+\n");
        break;
    case 83 ... 86:
        printf("B\n");
        break;
    case 80 ... 82:
        printf("B-\n");
        break;

    case 77 ... 79:
        printf("C+\n");
        break;

    case 73 ... 76:
        printf("C\n");
        break;

    case 70 ... 72:
        printf("C-\n");
        break;   

    case 67 ... 69:
        printf("D+\n");
        break;

    case 60 ... 66:
        printf("D Poor\n");
        break; 

    case 0 ... 59:
        printf("F\n");
        break;                             

    default:
        printf("Invalid marks");
        break;
    }
    return 0;
}