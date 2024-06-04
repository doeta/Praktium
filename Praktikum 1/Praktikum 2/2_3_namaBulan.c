#include <stdio.h>

int main() {
    int b;

    printf("Masukkan nomor bulan : ");
    scanf("%d", &b);
   

    if (b == 1){
        printf("januari\n");
    }
    
    else if(b == 2){
        printf("febuari\n");
    }

    else if(b == 3){
        printf("maret\n");
    }

    else if(b == 4){
        printf("april\n");
    }
    
    else if(b == 5){
        printf("mei\n");
    }
    
    else if(b == 6){
        printf("juni\n");
    }

    else if(b == 7){
        printf("juli\n");
    }


    else if(b == 8){
        printf("agustus\n");
    }

    else if(b == 9){
        printf("september\n");
    }

    else if(b == 10){
        printf("oktober\n");
    }

    else if(b == 11){
        printf("november\n");
    }

    else if(b == 12){
        printf("desember\n");
    }

    else{
			printf("Masukkan nomor bulan tidak tepat");
    }

    return 0;

}
