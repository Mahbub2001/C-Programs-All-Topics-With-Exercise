#include <stdio.h>
int main()
{
    int A[30], freq[50];
    int size, i, j, count;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);

        freq[i] = -1;
    }

    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] == A[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs time %d\n", A[i], freq[i]);
        }
    }

    return 0;
}