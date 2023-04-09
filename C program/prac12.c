#include<stdio.h>
int main()
{
      int p,q,r,s;
      p=25;
      q=35;
      r=15;
      s=46;

      if(q>r && s>p && (r+s)>(p+q) && p%2==0){
          printf("Correct Values");
      }else{
          printf("Wrong Value");
      }



    return 0;
}