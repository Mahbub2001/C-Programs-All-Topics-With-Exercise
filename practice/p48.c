#include <stdio.h>
int insert_any_space(int A[100], int size);
int insert_at_start(int A[100], int size);
int insert_at_end(int A[100], int size);
int main()
{
    int A[100], size, UserChoice;
    printf("Enter the size of the Array A : ");
    scanf("%d", &size);
    printf("Inputing Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("Printing the Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nYou can choose following options :"
           "\nEnter 1 for insert_any_space."
           "\nEnter 2 for insert at the start of the Array ."
           "\nEnter 3 for insert at the end of the Array..:  ");
    scanf("%d", &UserChoice);
    switch (UserChoice)
    {
    case 1:
        insert_any_space(A, size);
        break;
    case 2:
        insert_at_start(A, size);
        break;
    case 3:
        insert_at_end(A, size);
        break;

    default:
        printf("You choose wrong option .");
        break;
    }

    return 0;
}
int insert_any_space(int A[100], int size)
{
    int pos, value;
    printf("Enter the postion where you want you add the number : ");
    scanf("%d", &pos);
    printf("Enter the number that you want : ");
    scanf("%d", &value);

    if (pos <= 0 || pos > size + 1)
    {
        printf("Invalide work");
    }
    else
    {
        for (int i = size - 1; i >= pos - 1; i--)
        {
            A[i + 1] = A[i];
        }
        A[pos - 1] = value;
        size++;
        printf("Printing the updated Array : ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}
int insert_at_start(int A[100], int size)
{
    int value;
    printf("Enter the value that you want to add : ");
    scanf("%d", &value);

    for (int i = size - 1; i >= 0; i--)
    {
        A[i + 1] = A[i];
    }
    A[0] = value;
    size++;

    printf("Printing the updated Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
int insert_at_end(int A[100], int size)
{
    int value;
    printf("Enter the value that you want to add : ");
    scanf("%d", &value);

    A[size] = value;
    size++;

    printf("Printing the updated Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}