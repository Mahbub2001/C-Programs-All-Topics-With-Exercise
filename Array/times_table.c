
#include <stdio.h>

int main()
{
    int times_table[10][10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            times_table[i][j] = (i + 1) * (j + 1);
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\t", times_table[i][j]);
        }
        printf("\n");
    }

    return 0;
}