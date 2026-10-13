#include <stdio.h>

int main() {
    int jam, menit, detik;
    int total_detik;

    // Input jam (0 - 23)
    do {
        printf("Masukkan jam (0-23): ");
        scanf("%d", &jam);
        if (jam < 0 || jam >= 24) {
            printf("Error: Jam harus di antara 0 sampai 23. Silakan coba lagi.\n\n");
        }
    } while (jam < 0 || jam >= 24);

    // Input menit (0 - 59)
    do {
        printf("Masukkan menit (0-59): ");
        scanf("%d", &menit);
        if (menit < 0 || menit >= 60) {
            printf("Error: Menit harus di antara 0 sampai 59. Silakan coba lagi.\n\n");
        }
    }while (menit < 0 || menit >= 60);
    

    // Input detik (0 - 59)
    do {
        printf("Masukkan detik (0-59): ");
        scanf("%d", &detik);
        if (detik < 0 || detik >= 60) {
            printf("Error: Detik harus di antara 0 sampai 59. Silakan coba lagi.\n\n");
        }
    } while (detik < 0 || detik >= 60);

    // Menghitung total detik
    total_detik = (jam * 3600) + (menit * 60) + detik;

    // Menampilkan hasil
    printf("\nTotal detik: %d detik\n", total_detik);

    return 0;
}