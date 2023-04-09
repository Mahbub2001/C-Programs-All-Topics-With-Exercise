
#include <stdio.h>

int main()
{
    int a[100], n, i, j, c = 0, prime[100], t = 0;

    printf("\nEnter the size of the array (size <= 100): ");
    scanf("%d", &n);

    printf("\nEnter %d Numbers in Array:\n", n);
    for (i = 0; i < n; i++)
    {

        printf("[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        c = 0;

        if (a[i] == 1 || a[i] == 0)
        {
            c = 1;
        }

        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            prime[t] = a[i];
            t++;
        }
    }

    int temp;
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (prime[j] < prime[i])
            {
                temp = prime[i];
                prime[i] = prime[j];
                prime[j] = temp;
            }
        }
    }

    int sum = 0;
    printf("Prime numbers are: ");
    for (i = 0; i < t; i++)
    {
        printf("%d ", prime[i]);
        sum = sum + prime[i];
    }
    printf("The sum is = %d", sum);

    return 0;
}
