#include <stdio.h>

int main() {
    int h;

    printf("Masukkan nomor hari : ");
    scanf("%d", &h);

    if (h == 1){
        printf("senin\n");
    }
    
    else if(h == 2){
        printf("selasa\n");
    }

    else if(h == 3){
        printf("rabu\n");
    }

    else if(h == 4){
        printf("kamis\n");
    }
    
    else if(h == 5){
        printf("jumat\n");
    }
    
    else if(h == 6){
        printf("sabtu\n");
    }

    else if(h == 7){
        printf("minggu\n");
    }

    else{
			printf("Masukkan nomor hari tidak tepat");
    }

    return 0;

}
