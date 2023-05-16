#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N][N];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += A[i][i];
        sum2 += A[i][N - 1 - i];
    }
    printf("%d", abs(sum1 - sum2));

    return 0;
}
