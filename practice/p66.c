// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// int display(struct node *head)
// {
//     struct node *ptr;
//     ptr = head;

//     while (ptr != NULL)
//     {
//         printf("%d\t", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct node *insertion(struct node *head)
// {
//     int value;
//     printf("Enter the value that you want : ");
//     scanf("%d", &value);

//     struct node *ptr;
//     ptr = malloc(sizeof(struct node));

//     ptr->data = value;
//     ptr->next = head;

//     printf("the updated elements : ");
//     display(ptr);
// }

// int main()
// {
//     struct node *p, *prev, *head;
//     int i, j, n;

//     printf("Enter the number that you want : ");
//     scanf("%d", &n);

//     head = NULL;

//     for (i = 0; i < n; i++)
//     {
//         p = (struct node *)malloc(sizeof(struct node));

//         scanf("%d", &p->data);
//         p->next = NULL;

//         if (head == NULL)
//         {
//             head = p;
//         }
//         else
//         {
//             prev->next = p;
//         }
//         prev = p;
//     }
//     display(head);

//     insertion(head);

//     return 0;

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insert(struct node *head)
{
    int value;
    printf("Enter the value that you want : ");
    scanf("%d", &value);

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr ->data = value;

    struct node*p;
    p = head;

    while (p -> next != NULL)
    {
        p = p->next;
    }
    p -> next = ptr;
    ptr ->next = NULL;

    display(head);

};

int main()
{
    int n;
    struct node *p, *prev, *head;

    printf("Enter the elements number that you want : ");
    scanf("%d", &n);

    head = NULL;

    for (int i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;

        if (head == NULL)
        {
            head = p;
        }
        else
        {
            prev->next = p;
        }
        prev = p;
    }
    display(head);
    insert(head);

    return 0;
}