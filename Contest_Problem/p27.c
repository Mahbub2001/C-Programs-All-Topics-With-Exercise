#include <stdio.h>
int main()
{
    int M1, M2, D;
    scanf("%d%d%d", &M1, &M2, &D);
    printf("%d", ((D * M1) / M2));

    return 0;
}