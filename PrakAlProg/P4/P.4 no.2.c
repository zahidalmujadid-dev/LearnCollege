#include <stdio.h>

void rata2(){
    int jumlahAngka;
    float angka, total = 0.0;

    printf("Ada Berapa Angkanya: ");
    scanf("%d", &jumlahAngka);

    if (jumlahAngka <= 0) {
        printf("Jumlah angka harus lebih dari 0.\n");
        return;
    }

    for (int i = 1; i <= jumlahAngka; i++){
        printf("Masukkan Angka ke-%d: ", i);
        scanf("%f", &angka);
        total += angka;
    }

    float rata = total / jumlahAngka;
    printf("Rata-ratanya: %.2f\n", rata);
}

int main(){
    rata2();
    return 0;
}