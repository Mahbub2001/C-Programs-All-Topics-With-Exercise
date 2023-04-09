#include <stdio.h>
int main()
{
  int s;
  printf("Enter the s : ");
  scanf("%d", &s);

  if (s >= 0 && s <= 20)
  {
    printf("The range is (0,20]");
  }
  else if (s >= 21 && s <= 40)
  {
    printf("The range is (21,40]");
  }
  else if (s >= 41 && s <= 60)
  {
    printf("The range is (41,60]");
  }
  else if (s >= 61 && s <= 80)
  {
    printf("The range is (61,80]");
  }
  else
  {
    printf("This is a wrong number");
  }

  return 0;
}
