#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"===== HASIL PERHITUNGAN NILAI =====\n";
    string NIM, nama_Mahasiswa;
    float nilai_Tugas, nilai_UTS, nilai_UAS;
    cout<<"NAMA         : "; cin>>nama_Mahasiswa;
    cout<<"NIM          : "; cin>>NIM;
    cout<<"Nilai Tugas  : "; cin>>nilai_Tugas;
    cout<<"Nilai UTS    : "; cin>>nilai_UTS;
    cout<<"Nilai UAS    : "; cin>>nilai_UAS;
    while(nilai_Tugas<0||nilai_UAS<0||nilai_UTS<0||nilai_Tugas>100||nilai_UAS>100||nilai_UTS>100){
        cout<<"INPUTAN SALAH\nERROR!!!\n";
        cout<<"NAMA         : "; cin>>nama_Mahasiswa;
        cout<<"NIM          : "; cin>>NIM;
        cout<<"Nilai Tugas  : "; cin>>nilai_Tugas;
        cout<<"Nilai UTS    : "; cin>>nilai_UTS;
        cout<<"Nilai UAS    : "; cin>>nilai_UAS;
    }
    cout<<"------------------------------------\n";
    float nilai_Akhir=nilai_Tugas*0.2+nilai_UTS*0.3+nilai_UAS*0.5;
    cout<<"Nilai Akhir: " <<nilai_Akhir <<endl;
    cout<<"Grade Nilai: ";
    if(nilai_Akhir>=85){
        cout<<"A\n";
    }else if(nilai_Akhir>=70){
        cout<<"B\n";
    }else if(nilai_Akhir>=55){
        cout<<"C\n";
    }else if(nilai_Akhir>=40){
        cout<<"D\n";
    }else{
        cout<<"E\n";
    }
    cout<<"=====================================";
}