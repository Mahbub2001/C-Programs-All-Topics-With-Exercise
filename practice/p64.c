// #include<stdio.h>
// #include<stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// int traversal(struct Node*ptr)
// {
//         while (ptr != NULL)
//         {
//             printf("Elements : %d\n",ptr->data);
//             ptr = ptr ->next;
//         }

// }

// int main()
// {
//       int value;
//       struct Node*head;
//       struct Node*second;
//       struct Node*third;
//       struct Node*forth;

//       head = (struct Node *)malloc(sizeof(struct Node));
//       second = (struct Node*)malloc(sizeof(struct Node));
//       third = (struct Node*)malloc(sizeof(struct Node));
//       forth = (struct Node*)malloc(sizeof(struct Node));

//       head ->data = 10;
//       head -> next = second;

//       second ->data = 34;
//       second ->next = third;

//       third -> data = 33;
//       third -> next = forth;

//       forth ->data = 2;
//       forth->next = NULL;

//       traversal(head);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    scanf("%d", &head->data);
    head->next = second;

    scanf("%d", &second->data);
    second->next = third;

    scanf("%d", &third->data);
    third->next = forth;

    scanf("%d", &forth->data);
    forth->next = NULL;

    traversal(head);

    return 0;
}