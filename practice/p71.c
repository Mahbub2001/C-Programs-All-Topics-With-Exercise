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

struct node *delete_front(struct node *head);
struct node *delete_end(struct node *head);
struct node *delete_at_index(struct node *head);

int main()
{

    struct node *p, *prev, *head;
    int n;
    printf("Enter the value of n : ");
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
    // delete_front(head);
    // delete_end(head);
    delete_at_index(head);

    return 0;
}
struct node *delete_front(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = head->next;

    free(ptr);

    printf("\nUpdated element : \n");
    display(head);
}
struct node *delete_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    printf("\nUpdated element : \n");
    display(head);
}
struct node *delete_at_index(struct node *head)
{
    int pos;
    printf("Enter the position that you want : ");
    scanf("%d", &pos);

    struct node *current = head;
    struct node *previos = head;

    if (head == NULL)
    {
        printf("The list is empty.......");
    }
    else if (pos == 1)
    {
        current = head;
        head = head->next;

        free(current);
    }
    else
    {
    }
}