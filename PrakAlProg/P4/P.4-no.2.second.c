#include <stdio.h>

int jumlahAngka;
float rata, angka, total=0.0;

void rata2(){
    printf("Masukkan Angka: ");
    scanf("%f", &angka);
}

int main(){
    printf("Berapa Jumlah Angkanya: ");
    scanf("%d", &jumlahAngka);
    for (int i=1; i<=jumlahAngka; i++){
        rata2();
        total+=angka;
    }
    rata=total/jumlahAngka;
    printf("Rata-ratanya: %f", rata);
    return 0;
}