#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data ;
    struct node*next;
};

int display(struct node*head)
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\t",p ->data);
        p = p->next;
    }
    
}

struct node*insertion(struct node*head)
{
    int value;
    printf("Enter the value that you want to add : ");
    scanf("%d",&value);

    struct node*ptr =malloc(sizeof(struct node));

    ptr ->data = value;
    ptr ->next = head;

    printf("Updated element is : ");
    display(ptr);

}

struct node*insertion2(struct node*head)
{
    int value;
    printf("Enter the value that you want : ");
    scanf("%d",&value);

    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr ->data = value;

    struct node*p = head;

    while (p ->next != NULL)
    {
        p = p -> next;
    }
    p->next = ptr;
    ptr ->next = NULL;

    printf("Updated elements are : ");
    display(head);
    

}

int main()
{
      int n;
      struct node *p,*head,*prev;

      printf("Enter the number of the elelments : ");
      scanf("%d",&n);

      head = NULL;

      for (int i = 0; i < n; i++)
      {
          p =(struct node*)malloc(sizeof(struct node));
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
    //   insertion(head);
      insertion2(head);


    return 0;
}