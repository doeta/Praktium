#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i = 1, c = 0;
    printf("Masukkan input bernilai integer positif : ");
    scanf("%d", &N);

    if (N<=0){
        printf("Masukkan input bernilai integer positif");
    }else{
        while (i<N){
            if (N%i == 0){
                c = c+i;
            }
            i++;
        }
        //output
        if (c==N){
            printf("%d adalah bilangan sempurna", N);
        }else{
            printf("%d bukanlah bilangan sempurna", N);
        }
    }

    return 0;
}
