#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int jumlahProduk, hargaSatuan, jumlahMenu;
long long totalBelanja, pendapatanKotor = 0;
char lanjutkan;
string namaProduk;

void samadengan(int n){
	for (int i = n; i >= 1; i--){
		cout << "=";
	}
	cout <<endl;
	return;
}

void strep(int n){
	for (int i = n; i >= 1; i--){
		cout << "-";
	}
	cout <<endl;
	return;
}

int kasir(){
	samadengan(30);
    cout << "Masukkan jumlah menu yang di pesan: "; cin >> jumlahMenu;
    samadengan(30);
    
    totalBelanja = 0;
    for(int i = 1; i <= jumlahMenu; i++){
        cout << "\nMasukkan nama produk ke-" << i << ": "; cin >> namaProduk;
        cout << "Jumlah: "; cin >> jumlahProduk;
        cout << "Harga: "; cin >> hargaSatuan;
        strep(30);
        totalBelanja+=hargaSatuan*jumlahProduk;
    }

    return totalBelanja;
}

int diskon(int totalBelanja){
    if(totalBelanja > 200000){
        return totalBelanja*15/100;
    }else if(totalBelanja > 100000){
        return totalBelanja*10/100;
    }else{
        return 0;
    }
}

int main(){
    cout << "Selamat Datang di Program Kasir Otomatis\n";
    
    do{
        int totalBelanja = kasir();
        int nilaiDiskon = diskon(totalBelanja);
        cout << "Total  : Rp." << totalBelanja << endl;
        cout << "Diskon : Rp." << nilaiDiskon << endl;
        cout << "Bayar  : Rp." << totalBelanja - nilaiDiskon << endl;
        cout << "Apakah ada pesanan lain? (y/n): "; cin >> lanjutkan;
        pendapatanKotor+=totalBelanja - nilaiDiskon;
    }while(lanjutkan == 'y' || lanjutkan == 'Y');

    samadengan(30);
    cout << "\nRekap Hari ini (" << __DATE__ << ")";
    cout << "\nTotal Penghasilan: Rp." << pendapatanKotor;
    
    return 0;
}