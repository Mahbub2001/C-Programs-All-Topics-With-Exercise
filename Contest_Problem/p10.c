#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int V[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&V[i]);
    }

    int even=0,odd=0;

    for (int i = 0; i < N; i++)
    {
        if (V[i] % 2 == 0)
        {
            even +=V[i];
        }
        else{
            odd+=V[i];
        }
        
    }
    printf("%d %d",even,odd);
    return 0;
}