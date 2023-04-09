#include <stdio.h>
int main()
{

    int amount, Total;
    printf("Enter the amount = ");
    scanf("%d", &amount);

    Total = amount / 100;
    printf("%d note of 100\n", Total);

    amount = amount - Total * 100;
    Total = amount / 50;
    printf("%d note of 50\n", Total);

    amount = amount - Total * 50;
    Total = amount / 20;
    printf("%d note of 20\n", Total);

    amount = amount - Total * 20;
    Total = amount / 10;
    printf("%d note of 10\n", Total);

    amount = amount - Total * 10;
    Total = amount / 5;
    printf("%d note of 5\n", Total);

    amount = amount - Total * 5;
    Total = amount / 2;
    printf("%d note of 2\n", Total);

    amount = amount - Total * 2;
    Total = amount / 1;
    printf("%d note of 1\n", Total);

    return 0;
}