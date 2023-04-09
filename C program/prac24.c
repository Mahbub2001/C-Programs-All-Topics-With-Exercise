#include <stdio.h>
int main()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 93 && marks <= 100)
    {
        printf("Grade: A");
    }
    else if (marks >= 90 && marks <= 92)
    {
        printf("Grade: A-");
    }
    else if (marks >= 87 && marks <= 89)
    {
        printf("Grade: B+");
    }
    else if (marks >= 83 && marks <= 86)
    {
        printf("Grade: B Good");
    }
    else if (marks >= 80 && marks <= 82)
    {
        printf("Grade: B-");
    }
    else if (marks >= 77 && marks <= 79)
    {
        printf("Grade: C+");
    }
    else if (marks >= 73 && marks <= 76)
    {
        printf("Grade: C Average");
    }
    else if (marks >= 70 && marks <= 72)
    {
        printf("Grade: C-");
    }
    else if (marks >= 67 && marks <= 69)
    {
        printf("Grade: D+");
    }
    else if (marks >= 60 && marks <= 66)
    {
        printf("Grade: D Poor");
    }
    else if (marks >= 0 && marks <= 59)
    {
        printf("F* Failure");
    }
    else{
        printf("Invalid Number");
    }
    return 0;
}