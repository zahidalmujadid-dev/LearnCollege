#include <stdio.h>

struct Jam {
    int jam;
    int menit;
    int detik;
};

int main() {
    struct Jam A = {1, 60, 50};
    struct Jam B = {0, 37, 10};
    printf("Masukan Jam Pertama: \n");
    printf("Jam: ");
    scanf("%d", &A.jam);
    printf("Menit: ");
    scanf("%d", &A.menit);
    printf("Detik: ");
    scanf("%d", &A.detik);
    
    printf("Masukan Jam Kedua: \n");
    printf("Jam: ");
    scanf("%d", &B.jam);
    printf("Menit: ");
    scanf("%d", &B.menit);
    printf("Detik: ");
    scanf("%d", &B.detik);

    struct Jam jam;
    jam.jam = A.jam + B.jam;
    jam.menit = A.menit + B.menit;
    jam.detik = A.detik + B.detik;

    if (jam.detik >= 60) {
        jam.menit += jam.detik / 60;
        jam.detik %= 60;
    }

    if (jam.menit >= 60) {
        jam.jam += jam.menit / 60;
        jam.menit %= 60;
    }

    printf("Hasil Penjumlahan Jam: %d:%d:%d \n", jam.jam, jam.menit, jam.detik);

    return 0;
}