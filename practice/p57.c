#include <stdio.h>
int number_deletion(int A[100], int size);
int at_the_start_deletion(int A[100], int size);
int at_the_end_deletion(int A[100], int size);
int main()
{
    int A[100], size;
    printf("Enter the size of Array A : ");
    scanf("%d", &size);

    printf("Input the elements those you want : \n");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Printing the all elements of Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    int UserChoice;
    printf("\nEnter '1' for specific delete\n"
           "Enter '2' for delete number at the start\n"
           "Enter '3' for delete number at the end ...\n");
    scanf("%d", &UserChoice);

    switch (UserChoice)
    {
    case 1:
        number_deletion(A, size);
        break;
    case 2:
        at_the_start_deletion(A, size);
        break;
    case 3:
        at_the_end_deletion(A, size);
        break;
    default:
        printf("You entered wrong number ");
        break;
    }

    return 0;
}

int number_deletion(int A[100], int size)
{
    int position, item;
    printf("Enter the position where you want to delete : ");
    scanf("%d", &position);

    if (position <= 0 || position > size)
    {
        printf("It's not possible to delete.");
    }
    else
    {
        item = A[position - 1];

        for (int i = position - 1; i < size; i++)
        {
            A[i] = A[i + 1];
        }
        size--;

        printf("The deleted item is = %d", item);

        printf("The new array is : ");
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", A[i]);
        }
    }

    return 0;
}

int at_the_start_deletion(int A[100], int size)
{
    int item;

    item = A[0];

    for (int i = 0; i < size; i++)
    {
        A[i] = A[i + 1];
    }
    size--;

    printf("The deleted item is : %d", item);
    printf("The updated elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", A[i]);
    }

    return 0;
}

int at_the_end_deletion(int A[100], int size)
{
    int item;
    item = A[size - 1];

    size--;

    printf("the deleted item is = %d", item);
    printf("The updated elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", A[i]);
    }

    return 0;
}