#include <stdio.h>

int main()
{
	int nilai_Ujian;
    printf("Masukkan Hasil Nilai Ujian (0-100): ");
    scanf("%d", &nilai_Ujian);
    printf("Grade Anda: ");

    if(nilai_Ujian>100||nilai_Ujian<0)
    {
        printf("Error!\nMasukkan Salah!!!");
    }
    else if(nilai_Ujian>=85)
    {
        printf("A");
    }else if(nilai_Ujian>=70)
    {
        printf("B");
    }else if(nilai_Ujian>=50)
    {
        printf("C");
    }else
    {
        printf("D");
    }
    
    return 0;
}