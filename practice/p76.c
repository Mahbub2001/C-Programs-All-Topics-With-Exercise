#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head, *tail;

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void beginning()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &newnode->data);

    newnode->next = 0;
    newnode->prev = 0;

    head->prev = newnode;
    newnode->next = head;
    head = newnode;

    display();
}

void end()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &newnode->data);

    newnode->prev = 0;
    newnode->next = 0;

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

    display();
}

void pos()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    int poss;
    printf("\nposition : ");
    scanf("%d", &poss);
    int i = 1;

    if (poss < 1)
    {
        printf("invalide");
    }
    else if (poss == 1)
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while (i < poss - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }

    display();
}

int main()
{

    int n;
    scanf("%d", &n);

    head = NULL;

    struct node *newnode;

    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    display();
    // beginning();
    // end();
    pos();

    return 0;
}