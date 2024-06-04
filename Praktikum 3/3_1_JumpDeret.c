#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,i,sum;

    printf("Masukkan nilai : ");
    scanf("%d", &N);

    if (N > 0){
        sum = 0;
        for(i=1; i<=N; i++){
            sum = sum +i;
        }
        printf("Jumlah deret : %d", sum);
    }
    else printf("Masukkan nilai integer positif");
    return 0;
}
