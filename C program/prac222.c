#include<stdio.h>
int main()
{
      int total, tk;

      printf("Enter the value of money : ");
      scanf("%d",&tk);

      total= tk/100;
      printf("%d number of 100tk Note\n",total);

      tk=tk-(total*100);
      total=tk/50;
      printf("%d number of 50tk note\n",total);

      tk=tk-(total*50);
      total=tk/20;
      printf("%d number of 20tk note\n",total);

      tk=tk-total*20;
      total=tk/10;
      printf("%d number of 10tk note\n",total);

      tk=tk-(total*10);
      total=tk/5;
      printf("%d number of 5tk note\n",total);

      tk=tk-(total*5);
      total=tk/2;
      printf("%d number of 2 tk note\n",total);

      tk=tk-(total*2);
      total=tk/1;
      printf("%d number of 1tk note\n",total);


    return 0;
}