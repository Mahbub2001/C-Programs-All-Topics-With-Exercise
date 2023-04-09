#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int display(struct node *head)
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
struct node *insert_front(struct node *head);
struct node *insert_end(struct node *head);
struct node *insert_index(struct node *head);

int main()
{
    struct node *p, *prev, *head;
    int n;
    printf("Enter the number of linklist : ");
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
    //  insert_front(head);
    // insert_end(head);
    insert_index(head);

    return 0;
}
struct node *insert_front(struct node *head)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter the value that you want to add : ");
    scanf("%d", &value);

    ptr->data = value;
    ptr->next = p;

    printf("Updated linklist is : ");
    display(ptr);
}
struct node *insert_end(struct node *head)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter the value that you want to add : ");
    scanf("%d", &value);

    ptr->data = value;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    printf("Updated linklist is : ");
    display(head);
}
struct node *insert_index(struct node *head)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter the value that you want to add : ");
    scanf("%d", &value);

    int index;
    printf("Enter the index : ");
    scanf("%d", &index);

    ptr->data = value;

    int i = 0;

    while (i < index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    printf("Updated linklist is : ");
    display(head);
}