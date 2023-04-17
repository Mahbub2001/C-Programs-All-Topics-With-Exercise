#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    int min = A[0],a=0;
    for (int i = 1; i < N; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            a = i;
        }
    }
    printf("%d %d",min,a+1);
    return 0;
}