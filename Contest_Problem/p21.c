#include <stdio.h>
#include <string.h>

int main() {
    char S[1000001]; 
    fgets(S, sizeof(S), stdin); 
    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        if (S[i] == '\\') {
            break; 
        }
        printf("%c", S[i]); 
    }

    return 0;
}
