#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data ;
    struct Node *next;
};

int traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elemnets : %d\n",ptr ->data);
        ptr = ptr->next;
    }
    
}
int main()
{

   struct Node *head;
   struct Node *second;
   struct Node *third;
   struct Node *forth;

   head =(struct Node*)malloc(sizeof(struct Node)); 
   second = (struct Node*)malloc(sizeof(struct Node));
   third = (struct Node*)malloc(sizeof(struct Node));
   forth = (struct Node*)malloc(sizeof(struct Node));

   head ->data = 10;
   head ->next = second;

   second ->data = 38;
   second ->next = third;
   
   third -> data = 55;
   third ->next = forth;

   forth -> data = 22;
   forth ->next = NULL;

   traversal(head);

    return 0;
}