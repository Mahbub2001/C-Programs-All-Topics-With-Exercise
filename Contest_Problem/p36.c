#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001];
    scanf("%s", S);

    int j = strlen(S) - 1;
    int flag = 0;
    for (int i = 0; i <= strlen(S) / 2; i++)
    {
        if (S[i] != S[j])
        {
            flag= 1;
            break;
        }
        j--;
    }
    if (flag == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}