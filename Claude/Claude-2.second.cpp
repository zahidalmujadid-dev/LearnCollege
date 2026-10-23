#include <iostream>
#include <string>
using namespace std;

int main(){
    string jenis[3]={"Motor", "Mobil", "Bus"};
    int jamMasuk, jamKeluar, pilihan, 
    lamaParkir, biayaParkir, biayaCont, 
    biayaMaks, jumlahMotor=0, jumlahMobil=0, jumlahBus=0, 
    jumlahPendapatan=0, terlama=0;
    char lanjut;
    do{

        do{
            cout << "=== KAMPUS PARKIR PINTAR ===" <<endl;
            cout << "1. Motor\n2. Mobil\n3. Bus\n";
            cout << "Jenis Kendaraan: ";
            cin >> pilihan;
        }while(pilihan<1||pilihan>3);

        do{
            cout << "Jam Masuk  : ";
            cin >> jamMasuk;
            cout << "Jam Keluar : ";
            cin >> jamKeluar;
        }while(jamKeluar<jamMasuk||jamMasuk>23||jamMasuk<0||jamKeluar>23||jamKeluar<0);
        lamaParkir = jamKeluar - jamMasuk;
        if(lamaParkir==0){
            lamaParkir=1;
        }if(lamaParkir>terlama){
            terlama=lamaParkir;
        }
        
        /*V2
        do{
            cout << "Jam Masuk  : ";
            cin >> jamMasuk;
            cout << "Jam Keluar : ";
            cin >> jamKeluar;
        }while(jamMasuk>24||jamMasuk<0||jamKeluar>24||jamKeluar<0);
        do {
            cout << "Keluar hari berikutnya (y/n): ";
            cin >> lanjut;
            if (lanjut !='y'&&lanjut!='n'){
                cout << "kurang teliti\n";
            }
        }while (lanjut != 'y' && lanjut != 'n');
        lamaParkir = jamKeluar - jamMasuk;
        if(lamaParkir==0){
            lamaParkir=1;
        }if(lamaParkir>terlama){
            terlama=lamaParkir;
        }
        */

        switch(pilihan){
            case(1):
                biayaParkir=2000;
                biayaCont=1000;
                biayaMaks=10000;
                jumlahMotor+=1;
                break;
            case(2):
                biayaParkir=4000;
                biayaCont=2000;
                biayaMaks=20000;
                jumlahMobil+=1;
                break;
            case(3):
                biayaParkir=8000;
                biayaCont=4000;
                biayaMaks=40000;
                jumlahBus+=1;
                break;
        }

        /*V2
        if(lanjut=='y'){
            lamaParkir=(24-jamMasuk)+jamKeluar;
            biayaMaks*=2;
        }else if(lanjut=='n'){
            lamaParkir=jamKeluar-jamMasuk;
        }
        */

        cout << "Jenis Kendaraan    :" << jenis[pilihan-1] <<endl;
        cout << "Lama Parkir        :" << lamaParkir << "jam" <<endl;
        
        for(int i=2;i<=lamaParkir;i++){
            biayaParkir+=biayaCont;
        }if(biayaMaks<biayaParkir){
            biayaParkir=biayaMaks;
        }

        cout << "Biaya Parkir       :Rp." << biayaParkir <<endl <<endl;
        jumlahPendapatan+=biayaParkir;

        do{
            cout << "Ada kendaraan lain (y/n): ";
            cin >> lanjut;
        }while(lanjut!='n'&&lanjut!='y');

        cout <<endl;

    }while(lanjut=='y');

    cout << "=== REKAP SHIFT ===" <<endl;
    cout << "Motor              : " << jumlahMotor <<endl;
    cout << "Mobil              : " << jumlahMobil <<endl;
    cout << "Bus                : " << jumlahBus <<endl;
    cout << "Total Pendapatan   : Rp." << jumlahPendapatan <<endl;
    cout << "Parkir Terlama     : " << terlama << "jam";
}
