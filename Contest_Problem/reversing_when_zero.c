#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int k = 0;
            int j = i - 1;
            while (k < j)
            {
                int temp = a[k];
                a[k] = a[j];
                a[j] = temp;
                k++;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}