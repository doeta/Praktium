#include <stdio.h>
#include <stdbool.h>

#define Nmax 100

typedef struct {
    int T[Nmax];
    int N;
} TabInt;

int SEQSearchX1(TabInt T, int X, bool *Found, int *i) {
    *Found = false;
    *i = 1;

    while (*i <= T.N && !*Found) {
        if (T.T[*i] == X) {
            *Found = true;
        } else {
            *i = *i + 1;
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
    int i;

    SEQSearchX1(T, X, &Found, &i);

    if (Found) {
        printf("Nilai %d ditemukan pada indeks %d.\n", X, i);
    } else {
        printf("Nilai %d tidak ditemukan dalam tabel.\n", X);
    }

    return 0;
}
