#include<stdio.h>
int main(){

    int T;
    scanf("%d",&T);
    long long int S,A,B,C;
    while (T--)
    {
        scanf("%lld%lld%lld%lld",&S,&A,&B,&C);
        printf("%lld\n",(S-(A+B+C)));
    }  
    return 0;
}