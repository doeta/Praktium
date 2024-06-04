#include <stdio.h>

int main() {
    int i;
    printf("Masukkan bilangan integer sembarang : ");
    scanf("%d",&i);
    if (i > 0){
        printf("bilangan %d merupakan bilangan bulat positif",i);
    } else if (i == 0){
         printf("bilangan %d merupakan nol",i);
    } else if (i < 0) {
         printf("bilangan %d merupakan bilangan bulat negatif",i);
    } else {
        printf("Bukan termasuk sebuah bilangan");
    }
}