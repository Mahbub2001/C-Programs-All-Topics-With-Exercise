#include <stdio.h>
int main()
{
    int marks[1000], i, n, sum = 0;
    double avg;
    printf("How many do you want to store : ");
    scanf("%d", &n);

    printf("Enter the marks : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("Number %d : marks is %d\n", j, marks[j]);
        sum = sum + marks[j];
        avg = (double)sum / n;
    }
    printf("The sum is = %d", sum);
    printf("\nThe avg is = %lf", avg);

    return 0;
}
