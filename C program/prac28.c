#include <stdio.h>
int main()
{

  int physics;
  printf("Input the marks obtained in Physics : ", physics);
  scanf("%d", &physics);

  int chemistry;
  printf("Input the marks obtained in Chemistry : ", chemistry);
  scanf("%d", &chemistry);

  int mathematics;
  printf("Input the marks obtained in Mathematics : ", mathematics);
  scanf("%d", &mathematics);

  if (mathematics >= 65 && physics >= 55 && chemistry >= 50 && (mathematics + physics + chemistry) >= 190 && (mathematics + physics) >= 140)
  {
    printf("The candidate is eligible.\n");
  }
  else
  {
    printf("The candidate is not eligible.\n");
  }

  return 0;
}
