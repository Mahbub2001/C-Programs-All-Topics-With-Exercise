// uninitialized pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
  // int *ptr;//wild pointer.........
  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 5; // now regular pointer.........
  printf("%d ", *ptr);

  return 0;
}