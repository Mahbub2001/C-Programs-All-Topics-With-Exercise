#include <stdio.h>
int delete_any_space(int A[100], int size);
int delete_at_start(int A[100], int size);
int delete_at_end(int A[100], int size);
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
           "\nEnter 1 for delete_any_space."
           "\nEnter 2 for delete at the start of the Array ."
           "\nEnter 3 for delete at the end of the Array..:  ");
    scanf("%d", &UserChoice);
    switch (UserChoice)
    {
    case 1:
        delete_any_space(A, size);
        break;
    case 2:
        delete_at_start(A, size);
        break;
    case 3:
        delete_at_end(A, size);
        break;

    default:
        printf("You choose wrong option .");
        break;
    }

    return 0;
}
int delete_any_space(int A[100], int size)
{
    int pos;
    printf("Enter the position where you want to delete : ");
    scanf("%d",&pos);

    for (int i = pos -1 ; i >= size-1; i++)
    {
        A[i] = A[i+1];
    }
    size--;

    return 0;
}
int delete_at_start(int A[100], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        /* code */
    }
    


    return 0;
}
int delete_at_end(int A[100], int size)
{


    return 0;
}