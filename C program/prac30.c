#include <stdio.h>

int patterns(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);//same number print
        }
        printf(" \n");
    }
}

int patterns2(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf(" \n");
    }
}

int main()
{
    int row, type;

    printf("Enter 0 for choose patterns & choose 1 number for patterns2 : \n");
    scanf("%d", &type);

    printf("Enter the number of row : ");
    scanf("%d", &row);

    switch (type)
    {
    case 0:
        patterns(row);
        break;
    case 1:
        patterns2(row);
        break;

    default:
        printf("You choose wrong.....");
        break;
    }

    return 0;
}