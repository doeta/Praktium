#include <stdio.h>
#include <string.h>
#define JUMLAH_BUKU 6

// Variabel global untuk menyimpan jumlah stok buku dan judul bukunya
int stok_buku[JUMLAH_BUKU] = {2, 2, 2, 2, 2, 2};
char *judul_buku[JUMLAH_BUKU] = {
    "Dunia Sophie",
    "Calculus 9th Edition",
    "Atomic Habits",
    "Oshi no Ko 05",
    "Campbell Jilid 1",
    "Oshi no Ko 04"
};

// Fungsi untuk menampilkan stok buku
int tampilkan_stok_buku() {
    printf("\nStok Buku:\n");
    for (int i = 0; i < JUMLAH_BUKU; i++) {
        printf("%d. %s: %d\n", i+1, judul_buku[i], stok_buku[i]);
    }
    return 0; // Mengembalikan 0 untuk menandakan operasi berhasil
}

// Fungsi untuk mengembalikan buku
int kembalikan_buku() {
    int pilihan;
    tampilkan_stok_buku();
    printf("Pilih nomor buku yang ingin dikembalikan: ");
    scanf("%d", &pilihan);

    if (pilihan >= 1 && pilihan <= JUMLAH_BUKU) {
        stok_buku[pilihan-1]++;
        printf("Buku %s berhasil dikembalikan.\n", judul_buku[pilihan-1]);
        return 0; // Mengembalikan 0 untuk menandakan operasi berhasil
    } else {
        printf("Nomor buku tidak valid.\n");
        return 1; // Mengembalikan 1 untuk menandakan kesalahan
    }
}

// Fungsi untuk meminjam buku
int pinjam_buku() {
    int pilihan;
    tampilkan_stok_buku();
    printf("Pilih nomor buku yang ingin dipinjam: ");
    scanf("%d", &pilihan);

    if (pilihan >= 1 && pilihan <= JUMLAH_BUKU) {
        if (stok_buku[pilihan-1] > 0) {
            stok_buku[pilihan-1]--;
            printf("Buku %s berhasil dipinjam.\n", judul_buku[pilihan-1]);
            return 0; // Mengembalikan 0 untuk menandakan operasi berhasil
        } else {
            printf("Maaf, stok buku %s kosong.\n", judul_buku[pilihan-1]);
            return 2; // Mengembalikan 2 untuk menandakan stok kosong
        }
    } else {
        printf("Nomor buku tidak valid.\n");
        return 1; // Mengembalikan 1 untuk menandakan kesalahan
    }
}

int main() {
    int pilihan, status;

    do {
        // Menampilkan menu
        printf("\nMenu:\n");
        printf("1. Tampilkan Stok Buku\n");
        printf("2. Mengembalikan Buku\n");
        printf("3. Meminjam Buku\n");
        printf("0. Keluar\n");
        printf("Pilih operasi yang ingin dilakukan: ");
        scanf("%d", &pilihan);

        // Memproses pilihan
        switch (pilihan) {
            case 1:
                status = tampilkan_stok_buku();
                break;
            case 2:
                status = kembalikan_buku();
                break;
            case 3:
                status = pinjam_buku();
                break;
            case 0:
                printf("Terima kasih telah menggunakan sistem manajemen perpustakaan.\n");
                return 0; // Mengakhiri program dengan status 0
            default:
                printf("Pilihan tidak valid.\n");
                status = 1; // Menandakan pilihan tidak valid
        }
    } while (pilihan != 0);

    return status; // Mengembalikan status terakhir dari operasi
}
