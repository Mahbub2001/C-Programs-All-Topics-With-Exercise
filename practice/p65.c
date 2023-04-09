// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {
//     int i, j, n;
//     struct node *head, *prev, *p;

//     printf("Enter the number that you want to store : ");
//     scanf("%d", &n);

//     head = NULL;

//     for (int i = 0; i < n; i++)
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

//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {

//     struct node *head, *previous, *p;
//     int i, j, n;

//     printf("Enter the number of the elements : ");
//     scanf("%d", &n);

//     head = NULL;

//     for (int i = 0; i < n; i++)
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
//             previous->next = p;
//         }
//         previous = p;
//     }

//     while (head != NULL)
//     {
//         printf("%d\t", head->data);
//         head = head->next;
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {
//     int i, j, n;
//     struct node *head, *prv, *p;

//     printf("Enter the elements number that you want : ");
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
//             prv->next = p;
//         }
//         prv = p;
//     }

//     while (head != NULL)
//     {
//         printf("%d\t", head->data);
//         head = head->next;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}

int main()
{
    int i, j, n;
    struct node *p, *head, *prev;

    printf("Enter th elelments number : ");
    scanf("%d", &n);

    head = NULL;

    for (i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
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

    return 0;
}