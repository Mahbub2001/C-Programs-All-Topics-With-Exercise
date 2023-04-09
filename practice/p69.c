#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int display(struct node *head)
{
    struct node *p = head;

    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

// struct node *insert(struct node *head);
struct node*insert2(struct node *head);

int main()
{
    int n;
    struct node *p, *prev, *head;

    printf("Enter the number that you want : ");
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

    // insert(head);

    insert2(head);

    return 0;
}
// struct node *insert(struct node *head)
// {
//     int value;
//     printf("Enter the value that you want : ");
//     scanf("%d", &value);

//     int index;
//     printf("Enter the index that you want : ");
//     scanf("%d", &index);

//     struct node *p = head;
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));

//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = value;
//     ptr->next = p->next;
//     p->next = ptr;

//     printf("Updated elements are : ");
//     display(head);
// }
struct node*insert2(struct node *head)
{
    int value, index;
    printf("Enter the data that you want to add : ");
    scanf("%d", &value);

    printf("Enter the position where you want to add : ");
    scanf("%d", &index);

    struct node * p = head;
    struct node*ptr = (struct node*)malloc(sizeof(struct node));

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = value;
    ptr->next = p->next;
    p->next   = ptr;

    printf("The updated linklist is : ");
    display(head);
    
}