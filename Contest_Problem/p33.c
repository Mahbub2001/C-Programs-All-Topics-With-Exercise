#include<stdio.h>
#include<string.h>
int main(){
    char X[21],Y[21];
    scanf("%s %s",X,Y);
    int result = strcmp(X,Y);
    if (result == 0)
    {
        printf("%s",X);
    }
    else if ( result < 0)
    {
        printf("%s",X);
    }
    else{
        printf("%s",Y);
    }
    
    return 0;
}