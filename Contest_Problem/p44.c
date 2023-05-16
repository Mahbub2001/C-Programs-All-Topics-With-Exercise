#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    long long int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }

    int groups = N / K;
    int lastGroupSize = N % K;
    int lastIndex = N - lastGroupSize;

    for (int i = 0; i < groups; i++) {
        long long int min = arr[i * K];
        for (int j = i * K; j < (i + 1) * K; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }
        printf("%lld ", min);
    }

    if (lastGroupSize > 0) {
        long long int min = arr[lastIndex];
        for (int i = lastIndex; i < N; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        printf("%lld ", min);
    }

    return 0;
}
