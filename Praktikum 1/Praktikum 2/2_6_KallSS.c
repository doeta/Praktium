#include <stdio.h>
#include <stdlib.h>

int main(){

    int iA, iB;
    char x;

    printf("===Kode Operasi Aritmatika===\n");
    printf("=== a untuk a+b==============\n");
    printf("=== b untuk a-b==============\n");
    printf("=== c untuk a*b==============\n");
    printf("=== d untuk a/b==============\n");
    printf("=== e untuk a div b==========\n");
    printf("=== f untuk a mod b==========\n");
    printf("=============================\n");
    printf("Masukkan nilai a, b, dan kode operasi aritmatika : \n");
    scanf("%d %d %c", &iA, &iB, &x);

    printf("Hasil : ");
    if (x == 'a') {
        printf("%d", iA + iB);
    } else if (x == 'b') {
        printf("%d", iA - iB);
    } else if (x == 'c') {
        printf("%d", iA * iB);
    } else if (x == 'd') {
        printf("%f", iA / (float)iB);
    } else if (x == 'e') {
        printf("%d", iA / iB);
    } else if (x == 'f') {
        printf("%d", iA % iB);
    } else {
        printf("Bukan pilihan menu yang benar");
    }

    return 0;
}
