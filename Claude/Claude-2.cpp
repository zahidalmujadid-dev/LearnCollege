#include <iostream>
using namespace std;

int main(){
    char y;   // dipindah ke luar agar terlihat oleh while
    do{
        int hargaSatuan, jumlahBarang, jenisBarang, total = 0, totalSatuan, diskon;

        cout << "Ada Berapa Jenis Barangnya: ";
        cin >> jenisBarang;

        for(int i = 1; i <= jenisBarang; i++){
            cout << "Harga Barang " << i << ": ";
            cin >> hargaSatuan;
            cout << "Jumlah Barang " << i << ": ";
            cin >> jumlahBarang;
            totalSatuan = hargaSatuan * jumlahBarang;
            total += totalSatuan;
        }

        if(total < 50000){
            diskon = 0;
        }else if(total <= 99999){
            diskon = total * 0.05;
        }else if(total <= 199999){
            diskon = total * 0.1;
        }else{
            diskon = total * 0.15;
        }

        cout << "Total Belanja: " << total << endl;
        cout << "Total Diskon: " << diskon << endl;
        cout << "Total yang Harus Dibayar: " << total - diskon << endl;

        do{
            cout << "Ada pelanggan lain (y/n): ";
            cin >> y;
        }while(y != 'y' && y != 'n');

    }while(y == 'y');

    return 0;
}