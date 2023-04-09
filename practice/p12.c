// 34. Write a program in C to find the prime numbers within a range of numbers. Go to the editor
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 50
// Expected Output :
// The prime number between 1 and 50 are :
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

#include <stdio.h>
int main()
{
    int start, end, count = 1;
    printf("Enter the start number :");
    scanf("%d", &start);

    printf("Enter the end number : ");
    scanf("%d", &end);
 
    printf("The Prime Numbers are : ");

    for (int i = start; i <= end; i++)
    {
        if (i == 0 || i == 1)
        {
            continue; //skip korar jonno
        }
        count = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count = 0;
            }
        }

        if (count == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}