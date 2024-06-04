#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, i, j, s;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus bilangan integer positif\n");
    } else {
        for (i = 1; i <= N; i++) {
            s = 0; 
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    s += j;
                }
            }
            if (s == i) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
