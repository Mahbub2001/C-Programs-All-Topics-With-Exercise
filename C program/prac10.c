#include<stdio.h>
int main()
{

  int sec=25300;

  int Hours=sec/3600;
  printf("Hours : %d\n",Hours);

  int Minutes=(sec%3600)/60;
  printf("Minute: %d\n",Minutes);

  int second=sec-(Hours*3600+Minutes*60);
  printf("Second: %d\n",second);



    return 0;
}