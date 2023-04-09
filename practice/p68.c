#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; 
    struct node*next;
};

int display(struct node*head);
struct node*insert1(struct node*head);
struct node*insert2(struct node*head);
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    struct node *p,*head,*prev;

    head = NULL;

    for (int i = 0; i < n; i++)
    {
       p = (struct node*)malloc(sizeof(struct node));
       scanf("%d",&p->data);
       p->next = NULL;

       if (head == NULL)
       {
           head = p;
       }
       else
       {
           prev ->next = p;
       }
       prev = p;
       
    }
    
    display(head);
    insert1(head);
    insert2(head);

    return 0;
}

int display(struct node*head)
{
    struct node*p = head;
    while (p != NULL)
    {
        printf("%d\t",p ->data);
        p = p->next;
    }
    
}

struct node*insert1(struct node*head)
{
    int value;
    printf("Enter the value that you want : ");
    scanf("%d",&value);

    struct node*p = head;
    p = (struct node*)malloc(sizeof(struct node));

    p ->data = value;
    p->next = head; 

    printf("The updated elements are : ");
    display(p);
}
struct node*insert2(struct node*head)
{
    int value ; 
    printf("Enter the value taht you want to add : ");
    scanf("%d",&value);

    struct node*p = head;
    struct node*ptr = (struct node*)malloc(sizeof(struct node));

    ptr -> data = value;

    while (p ->next !=NULL)
    {
        p = p ->next ;
    }
    p->next = ptr;
    ptr ->next = NULL;

    printf("The updated elements are : ");
    display(head);
}