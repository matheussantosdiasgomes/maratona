#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    if (N < 0 || N > 10) {
        return 1;
    }

    if (N <= 5) {
        for (int i = 0; i < N; i++) {
            printf("I");
        }
        for (int i = N; i < 5; i++) {
            printf("*");
        }
        printf("\n");

        for (int i = 0; i < 5; i++) {
            printf("*");
        }
        printf("\n");
    } else {
        for (int i = 0; i < 5; i++) {
            printf("I");
        }
        printf("\n");

        for (int i = 0; i < N - 5; i++) {
            printf("I");
        }
        for (int i = N - 5; i < 5; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
