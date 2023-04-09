#include <stdio.h>
int main()
{
    int *a, i, j, temp, size;///i ,j must be declare here for this................otherwise it will not work...........

    printf(" Input the number of elements to store in the array : ");
    scanf("%d", &size);

    printf(" Input %d number of elements in the array : \n", size);
    for (i = 0; i < size; i++)
    {
        printf(" element - %d : ", i + 1);
        scanf("%d", a + i);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(a + i) > *(a + j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    printf("\n The elements in the array after sorting : \n");
    for (i = 0; i < size; i++)
    {
        printf(" element - %d : %d \n", i + 1, *(a + i));
    }
    printf("\n");

    return 0;
}