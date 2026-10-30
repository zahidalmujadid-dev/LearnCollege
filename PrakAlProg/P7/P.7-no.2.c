#include <stdio.h>

struct Jam {
    int jam;
    int menit;
    int detik;
};

int main() {
    struct Jam Jam = {0, 37, 10};
    printf("Masukan Waktu (jam, menit detik)\n");
    printf("Masukkan Jam: ");
    scanf("%d", &Jam.jam);
    printf("Masukkan Menit: ");
    scanf("%d", &Jam.menit);
    printf("Masukkan Detik: ");
    scanf("%d", &Jam.detik);

    if (Jam.detik >= 60) {
        Jam.menit += 1;
        Jam.detik -= 60; 
    }

    if (Jam.menit >= 60) {
        Jam.jam += 1;
        Jam.menit -=60;
    }

    printf("Hasil jumlah Jam A dan Jam B");
    printf("JAM: %d:%d:%d", Jam.jam, Jam.menit, Jam.detik);
}
// - Jika `detik` >= 60, tambahkan 1 ke `menit` dan kurangi `detik` dengan 60.
// - Jika `menit` >= 60, tambahkan 1 ke `jam` dan kurangi `menit` dengan 60.