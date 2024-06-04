#include <stdio.h>
#include <stdbool.h>

#define Nmax 100

typedef struct {
    int T[Nmax];
    int N;
} TabInt;

void SEQSearchX2(TabInt T, int X, bool *Found, int *IX) {
    *Found = false;
    *IX = -1; // Default value if not found

    for (int i = 1; i <= T.N; i++) {
        if (T.T[i] == X) {
            *Found = true;
            *IX = i; // Found X at index i
            break; // No need to continue searching
        }
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
    bool Found;
    int IX;

    SEQSearchX2(T, X, &Found, &IX);

    if (Found) {
        printf("Nilai %d ditemukan pada indeks %d.\n", X, IX);
    } else {
        printf("Nilai %d tidak ditemukan dalam tabel.\n", X);
    }

    return 0;
}
