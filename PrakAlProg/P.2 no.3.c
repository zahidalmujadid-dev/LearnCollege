#include <stdio.h>

int main()
{
    int angka;
    printf("Program cek Ganjil/Genap\n");
    printf("Masukkan Angka: ");
    scanf("%d", &angka);
    printf("Angka Anda ");
    if(angka<0)
    {
        printf("Negatif");
    }
    else if(angka==0)
    {
        printf("Nol besar");
    }
    else
    {
        printf("Positif");
    }
}