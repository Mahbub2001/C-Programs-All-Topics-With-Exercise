#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 26

int main() {
    char S[1000001];
    scanf("%s", S);

    int freq[MAX_CHARACTERS] = {0};
    for (int i = 0; i < strlen(S); i++) {
        freq[S[i] - 'a']++;
    }
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
