#include <stdio.h>
#include <math.h>
int main()
{
    int start, end,k;
    printf("Enter the start number : ");
    scanf("%d", &start);
    printf("Enter the end number : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
      k=pow(i,3);
      printf("%d ",k);
    }
    return 0;
}