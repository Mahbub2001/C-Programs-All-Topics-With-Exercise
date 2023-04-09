#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80


int  length;
void record();
void load();
int  life;
void Up();
void Right();
void quite();
int  Scoreonly();
int  bend_no;
int  len;
char key;
void Delay(long double);
void Move();
void Food();
int  Score();
void Left();
void Print();
void BORDER();
void Down();
void gotoxy(int x, int y);
void GotoXY(int x, int y);
void Bend();


typedef struct coordinate
{
    int x;
    int y;
    int direction;

}coordinate;
coordinate head, bend[500], food, body[30];

int main()
{
    char key;
    Print();
    system("cls");
    load();
    length = 5;
    head.x = 25;
    head.y = 20;
    head.direction = RIGHT;
    BORDER();
    Food(); // to generate food coordinates initially
    life = 5; // number of extra lives
    bend[0] = head;
    Move(); // initialing initial bend coordinate
    return 0;
}
void Move()
{
    int a;
    do
    {
        Food();
        fflush(stdin);
        len = 0;
        for (int i = 0; i < 30; i++)
        {
            body[i].x = 0;

            body[i].y = 0;

            if (i == length)

                break;
        }

        Delay(length);
        BORDER();
        if (head.direction == RIGHT)
            Right();
        else if (head.direction == LEFT)
            Left();
        else if (head.direction == DOWN)
            Down();
        else if (head.direction == UP)
            Up();
        quite();
    } while (!kbhit());

    a = getch();
    if (a == 27)

    {
        system("cls");
        exit(0);
    }
    key = getch();

    if ((key == RIGHT && head.direction != LEFT && head.direction != RIGHT) || (key == LEFT && head.direction != RIGHT && head.direction != LEFT) || (key == UP && head.direction != DOWN && head.direction != UP) || (key == DOWN && head.direction != UP && head.direction != DOWN))
    {
        bend_no++;

        bend[bend_no] = head;

        head.direction = key;

        if (key == UP)

            head.y--;

        if (key == DOWN)

            head.y++;

        if (key == RIGHT)

            head.x++;

        if (key == LEFT)

            head.x--;

        Move();
    }
    else if (key == 27)
    {
        system("cls");

        exit(0);
    }

    else
    {
        printf("\a");
        Move();
    }
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a, b);
}
void load()
{
    int row, col, r, c, q;
    gotoxy(36, 14);
    printf("loading...");
    gotoxy(30, 15);
    for (r = 1; r <= 20; r++)
    {
        for (q = 0; q <= 100000000; q++)
            ; // to display the character slowly
        printf("%c", 177);
    }
    getch();
}
void Down()
{
    int i;
    for (i = 0; i <= (head.y - bend[bend_no].y) && len < length; i++)
    {
        GotoXY(head.x, head.y - i);
        {
            if (len == 0)
                printf("v");
            else
                printf("*");
        }
        body[len].x = head.x;
        body[len].y = head.y - i;
        len++;
    }
    Bend();
    if (!kbhit())
        head.y++;
}
void Delay(long double k)
{
    Score();
    long double i;
    for (i = 0; i <= (10000000); i++)
        ;
}
void quite()
{
    int i, check = 0;
    for (i = 4; i < length; i++) // starts with 4 because it needs minimum 4 element to touch its own body
    {
        if (body[0].x == body[i].x && body[0].y == body[i].y)
        {
            check++; // check's value increases as the coordinates of head is equal to any other body coordinate
        }
        if (i == length || check != 0)
            break;
    }
    if (head.x <= 10 || head.x >= 70 || head.y <= 10 || head.y >= 30 || check != 0)
    {
        life--;
        if (life >= 0)
        {
            head.x = 25;
            head.y = 20;
            bend_no = 0;
            head.direction = RIGHT;
            Move();
        }
        else
        {
            system("cls");
            printf("TRY AGAIN NEXT TIME.\nPRESS ANY KEY TO QUIT THE GAME\n");
            record();
            exit(0);
        }
    }
}
void Food()
{
    if (head.x == food.x && head.y == food.y)
    {
        length++;
        time_t a;
        a = time(0);
        srand(a);
        food.x = rand() % 70;
        if (food.x <= 10)
            food.x += 11;
        food.y = rand() % 30;
        if (food.y <= 10)

            food.y += 11;
    }
    else if (food.x == 0) /*to create food for the first time coz global variable are initialized with 0*/
    {
        food.x = rand() % 70;
        if (food.x <= 10)
            food.x += 11;
        food.y = rand() % 30;
        if (food.y <= 10)
            food.y += 11;
    }
}
void Left()
{
    int i;
    for (i = 0; i <= (bend[bend_no].x - head.x) && len < length; i++)
    {
        GotoXY((head.x + i), head.y);
        {
            if (len == 0)
                printf("<");
            else
                printf("*");
        }
        body[len].x = head.x + i;
        body[len].y = head.y;
        len++;
    }
    Bend();
    if (!kbhit())
        head.x--;
}
void Right()
{
    int i;
    for (i = 0; i <= (head.x - bend[bend_no].x) && len < length; i++)
    {
        // GotoXY((head.x-i),head.y);
        body[len].x = head.x - i;
        body[len].y = head.y;
        GotoXY(body[len].x, body[len].y);
        {
            if (len == 0)
                printf(">");
            else
                printf("*");
        }
        /*body[len].x=head.x-i;
        body[len].y=head.y;*/
        len++;
    }
    Bend();
    if (!kbhit())
        head.x++;
}
void Bend()
{
    int i, j, diff;
    for (i = bend_no; i >= 0 && len < length; i--)
    {
        if (bend[i].x == bend[i - 1].x)
        {
            diff = bend[i].y - bend[i - 1].y;
            if (diff < 0)
                for (j = 1; j <= (-diff); j++)
                {
                    body[len].x = bend[i].x;
                    body[len].y = bend[i].y + j;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
            else if (diff > 0)
                for (j = 1; j <= diff; j++)
                {
                    /*GotoXY(bend[i].x,(bend[i].y-j));
                    printf("*");*/
                    body[len].x = bend[i].x;
                    body[len].y = bend[i].y - j;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
        }
        else if (bend[i].y == bend[i - 1].y)
        {
            diff = bend[i].x - bend[i - 1].x;
            if (diff < 0)
                for (j = 1; j <= (-diff) && len < length; j++)
                {
                    /*GotoXY((bend[i].x+j),bend[i].y);
                    printf("*");*/
                    body[len].x = bend[i].x + j;
                    body[len].y = bend[i].y;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
            else if (diff > 0)
                for (j = 1; j <= diff && len < length; j++)
                {
                    /*GotoXY((bend[i].x-j),bend[i].y);
                    printf("*");*/
                    body[len].x = bend[i].x - j;
                    body[len].y = bend[i].y;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
        }
    }
}
void BORDER()
{
    system("cls");
    int i;
    GotoXY(food.x, food.y); /*displaying food*/
    printf("F");
    for (i = 10; i < 71; i++)
    {
        GotoXY(i, 10);
        printf("#");
        GotoXY(i, 30);
        printf("#");
    }
    for (i = 10; i < 31; i++)
    {
        GotoXY(10, i);
        printf("#");
        GotoXY(70, i);
        printf("#");
    }
}
void Print()
{
    // GotoXY(10,12);
    printf("\tWELCOME TO THIS GAME(PRESS ENTER TO CONTINUE)\n");
    getch();
    system("cls");
    printf("\t\t\t\t\t\tRULES : \n");
    printf("\n-> USE ARROW KEY TO MOVE THE SNAKE\n\n"
    "-> YOU HAVE TO EAT THE FOODS.EVERYTIME WHEN YOU EAT THE FOODS YOUR SNAKE WILL BE INCREASING BY 1 ELEMENT.\n\n"
    "-> THERE ARE 5 LIVES IN YOUR HAND. YOUR LIVE WILL INCREASE WHEN YOUR SNAKE HIT THE WALL\n\n"
    "-> YOU CAN PAUSE THE GAME BY PRESSING ANY KEY. TO CONTINUE YOU HAVE TO PRESS ANY KEY AGAIN\n\n"
    "-> IF YOU NEED TO EXIT YOU HAVE TO PRESS ESC\n");
    printf("\n\nPRESS ENTER TO PLAY THE GAME................");
    if (getch() == 27)
        exit(0);
}
void record()
{
    char YOU[20], MY[20], cha, c;
    int i, j, px;
    FILE *info;
    info = fopen("record.txt", "a+");
    getch();
    system("cls");
    printf("ENTER YOUR NAME\n");
    scanf("%[^\n]s", YOU);
    //************************
    for (j = 0; YOU[j] != '\0'; j++)
    { // to convert the first letter after space to capital
        MY[0] = toupper(YOU[0]);
        if (YOU[j - 1] == ' ')
        {
            MY[j] = toupper(YOU[j]);
            MY[j - 1] = YOU[j - 1];
        }
        else
            MY[j] = YOU[j];
    }
    MY[j] = '\0';
    //*****************************
    // sdfprintf(info,"\t\t\tPlayers List\n");
    fprintf(info, "PLAYER NAME :%s\n", MY);
    // for date and time

    time_t mytime;
    mytime = time(NULL);
    fprintf(info, "PLAYING TIME:%s", ctime(&mytime));
    //**************************
    fprintf(info, "SCORE:%d\n", px = Scoreonly()); // call score to display score
    // fprintf(info,"\nLevel:%d\n",10);//call level to display level
    for (i = 0; i <= 50; i++)
        fprintf(info, "%c", '_');
    fprintf(info, "\n");
    fclose(info);
    printf("DO YOU WANT TO SEE THE PAST RECORDS : 'y'\n");
    cha = getch();
    system("cls");
    if (cha == 'y')
    {
        info = fopen("record.txt", "r");
        do
        {
            putchar(c = getc(info));
        } while (c != EOF);
    }
    fclose(info);
}
int Score()
{
    int score;
    GotoXY(20, 8);
    score = length - 5;
    printf("SCORE : %d", (length - 5));
    score = length - 5;
    GotoXY(50, 8);
    printf("Life : %d", life);
    return score;
}
int Scoreonly()
{
    int score = Score();
    system("cls");
    return score;
}
void Up()
{
    int i;
    for (i = 0; i <= (bend[bend_no].y - head.y) && len < length; i++)
    {
        GotoXY(head.x, head.y + i);
        {
            if (len == 0)
                printf("^");
            else
                printf("*");
        }
        body[len].x = head.x;
        body[len].y = head.y + i;
        len++;
    }
    Bend();
    if (!kbhit())
        head.y--;
}