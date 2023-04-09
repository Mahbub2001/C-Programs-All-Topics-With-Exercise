#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[20];
    int roll;

    struct subject
    {
        char name[20];
        int marks;

    } subject[2];
    int full_marks;
    float average;

} student;

void write_file()
{
    student *s;
    FILE *ptr;

    int n;
    scanf("%d", &n);
    s = (struct student *)calloc(n, sizeof(student));

    ptr = fopen("my_file1.txt", "w");

    for (int i = 0; i < n; i++)
    {
        s[i].full_marks = 0;
        s[i].average = 0;

        fflush(stdin);
        printf("\nFor student %d: \n", i + 1);
        printf("\nEnter the name : ");
        scanf("%[^\n]s", s[i].name);
        printf("Enter the roll number : ");
        scanf("%d", &s[i].roll);

        for (int j = 0; j < 2; j++)
        {
            fflush(stdin);
            printf("Enter subject - %d name : ", j + 1);
            scanf("%[^\n]s", &s[i].subject[j].name);
            printf("Enter the marks of subject - %d : ", j + 1);
            scanf("%d", &s[i].subject[j].marks);

            s[i].full_marks += s[i].subject[j].marks;
        }
        s[i].average = s[i].full_marks / 2.0;
        fwrite(&s[i], sizeof(student), 1, ptr);
    }
    fclose(ptr);
}

void read_file()
{
    student s1;
    FILE *ptr;
    int i;
    ptr = fopen("my_file1.txt", "r");

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        printf("%d %s", s1.roll, s1.name);
        for (i = 0; i < 2; i++)
        {
            printf("%4d", s1.subject[i].marks);
        }
        printf("%5d%7.2f", s1.full_marks, s1.average);
        printf("\n");
    }
    fclose(ptr);
}
void append_file()
{
    student *s;
    FILE *ptr;
    int n;
    scanf("%d", &n);

    s = (struct student *)calloc(n, sizeof(struct student));
    ptr = fopen("my_file1.txt", "a");

    for (int i = 0; i < n; i++)
    {
        s[i].full_marks = 0;
        s[i].average = 0;

        fflush(stdin);
        printf("For student NO - %d : ", i + 1);
        printf("\nEnter Name : ");
        scanf("%[^\n]s", &s[i].name);
        printf("\nEnter the roll number : ");
        scanf("%d", &s[i].roll);

        for (int j = 0; j < n; j++)
        {
            fflush(stdin);
            printf("Enter the subject Name : ");
            scanf("%[^\n]s", s[i].subject[j].name);
            printf("Enter the marks : ");
            scanf("%d", &s[i].subject[j].marks);

            s[i].full_marks += s[i].subject[j].marks;
        }
        s[i].average = s[i].full_marks / 2.0;
        fwrite(&s[i], sizeof(student), 1, ptr);
    }
    fclose(ptr);
}

void record_number()
{
    student s1;
    FILE *ptr;
    ptr = fopen("my_file1.txt", "r");

    fseek(ptr, 0, SEEK_END);
    int n = ftell(ptr) / sizeof(student);
    printf("No of records : %d", n);
    fclose(ptr);
}

void search()
{
    student s1;
    FILE *ptr = NULL;
    int i, j, roll, found;

    ptr = fopen("my_file1.txt", "r");
    printf("Enter the roll number that you want to search : ");
    scanf("%d", &roll);

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        if (s1.roll == roll)
        {
            found = 1;
            printf("%s  %d\t", s1.name, s1.roll);
            for (i = 0; i < 2; i++)
            {
                printf("%s  %d\t", s1.subject[i].name, s1.subject[i].marks);
            }
            printf("%d  %f\t", s1.full_marks, s1.average);
        }
        if (!found)
        {
            printf("NO records foound ");
        }
    }
    fclose(ptr);
}

void update()
{
    student s1;
    FILE *ptr = NULL, *ptr1 = NULL;
    int roll, found = 0;

    ptr = fopen("my_file1.txt", "r");
    ptr1 = fopen("temp.txt", "w");
    printf("Enter the roll number that you want to update : ");
    scanf("%d", &roll);

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        if (s1.roll == roll)
        {
            s1.full_marks = 0;
            s1.average = 0;

            found = 1;
            fflush(stdin);
            printf("Enter the name : ");
            scanf("%[^\n]s", s1.name);

            for (int i = 0; i < 2; i++)
            {
                fflush(stdin);
                printf("Enter the subject name %d : ", i + 1);
                scanf("%[^\n]s", s1.subject[i].name);
                printf("Enter the score of subjects : ");
                scanf("%d", &s1.subject[i].marks);

                s1.full_marks += s1.subject[i].marks;
            }
            s1.average = s1.full_marks / 2.0;
            fwrite(&s1, sizeof(student), 1, ptr1);
        }
    }
    fclose(ptr);
    fclose(ptr1);

    if (found == 1)
    {
        ptr = fopen("my_file1.txt", "w");
        ptr1 = fopen("temp.txt", "r");

        while (fread(&s1, sizeof(student), 1, ptr1))
        {
            fwrite(&s1, sizeof(student), 1, ptr);
        }
        fclose(ptr);
        fclose(ptr1);
    }
    else
    {
        printf("CANNOT FIND IT");
    }
}

void delete ()
{
    student s1;
    FILE *ptr = NULL, *ptr1 = NULL;
    int roll1, found = 0;

    ptr = fopen("my_file1.txt", "r");
    ptr1 = fopen("my_file1.txt", "w");
    printf("Enter the roll number that you want : ");
    scanf("%d", &roll1);

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        if (s1.roll == roll1)
        {
            found = 1;
        }
        else
        {
            fwrite(&s1, sizeof(student), 1, ptr1);
        }
    }
    fclose(ptr);
    fclose(ptr1);

    if (found == 1)
    {
        ptr1 = fopen("my_file1.txt", "r");
        ptr = fopen("my_file1.txt", "w");

        while (fread(&s1, sizeof(student), 1, ptr1))
        {
            fwrite(&s1, sizeof(student), 1, ptr);
        }
        fclose(ptr);
        fclose(ptr1);
    }
    else
    {
        printf("record not found");
    }
}

int main()
{
    // write_file();
    // read_file();
    // append_file();
    // record_number();
    // search();
    // update();
    delete ();

    return 0;
}