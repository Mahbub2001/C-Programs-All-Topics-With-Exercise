#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    long long int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld",&A[i]);
    }
    for (int i = N - 1; i >=0 ; i--)
    {
        printf("%lld ",A[i]);
    }
    
    return 0;
}