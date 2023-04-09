#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int acc_num;
    int balance;
} Account_info;

int low_balance_customer(Account_info s[30], int size)
{
    FILE *ptr;
    ptr = fopen("Bank_info.txt", "w");

    printf("\nPRINT NAMES OF ALL THE CUSTOMERS HAVING BALANCE LESS THAN $200 : \n\n");
    for (int i = 0; i < size; i++)
    {
        if (s[i].balance < 200)
        {
            printf("NAME  : %s\n", s[i].name);
            printf("ACCOUNT NUMBER = %d\n", s[i].acc_num);
            printf("BALANCE = %d$\n", s[i].balance);
            printf("\n");
        }
    }
    for (int i = 0; i < size; i++)
    {
        fwrite(&s[i], sizeof(Account_info), 1, ptr);
    }
    fclose(ptr);
}

int special_increment(Account_info s[30], int size)
{
    FILE *ptr;
    ptr = fopen("Bank_info.txt", "a");

    printf("\n\nPRINT NAMES OF ALL THE CUSTOMERS HAVING BALANCE MORE THAN $1000 : \n\n");
    for (int i = 0; i < size; i++)
    {
        if (s[i].balance > 1000)
        {
            printf("NAME  : %s\n", s[i].name);
            printf("ACCOUNT NUMBER = %d\n", s[i].acc_num);
            printf("BALANCE = %d$\n", (s[i].balance + 100));
            printf("\n");
        }
    }

    for (int i = 0; i < size; i++)
    {
        fwrite(&s[i], sizeof(Account_info), 1, ptr);
    }
    fclose(ptr);
}

int main()
{
    Account_info s[30];

    int size;
    printf("Enter the number of input : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("For serial %d : \n", i + 1);
        scanf("%s%d%d", &s[i].name, &s[i].acc_num, &s[i].balance);
    }

    low_balance_customer(s, size);
    special_increment(s, size);

    FILE *ptr;
    ptr = fopen("Bank_info.txt", "a");

    printf("\n\\n");
    for (int i = 0; i < size; i++)
    {
        if (s[i].balance >= 200 && s[i].balance <= 1000)
        {
            printf("NAME  : %s\n", s[i].name);
            printf("ACCOUNT NUMBER = %d\n", s[i].acc_num);
            printf("BALANCE = %d$\n", (s[i].balance));
            printf("\n");
        }
    }
    for (int i = 0; i < size; i++)
    {
        fwrite(&s[i], sizeof(Account_info), 1, ptr);
    }
    fclose(ptr);

    return 0;
}


