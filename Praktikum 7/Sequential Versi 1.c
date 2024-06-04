#include <stdio.h>

#define Nmax 100

typedef struct {
    int T[Nmax];
    int N;
} TabInt;

int SEQSearchX1(TabInt T, int X, int *IX) {
    int i = 1;
    *IX = 0; // Default value if not found

    while (i <= T.N && T.T[i] != X) {
        i++;
    }

    if (i <= T.N) {
        *IX = i; // Found X at index i
    }
}

int main() {
    TabInt T;
    T.N = 8;
    T.T[1] = 1;
    T.T[2] = 3;
    T.T[3] = 5;
    T.T[4] = -8;
    T.T[5] = 12;
    T.T[6] = 90;
    T.T[7] = 3;
    T.T[8] = 5;
    int X = 90;
    int IX;

    SEQSearchX1(T, X, &IX);

    if (IX != 0) {
        printf("Nilai %d ditemukan pada indeks %d.\n", X, IX);
    } else {
        printf("Nilai %d tidak ditemukan dalam tabel.\n", X);
    }

    return 0;
}
