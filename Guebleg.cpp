/*
Program Konversi Otomatis ke Detik
I.S:
F.S:
 */

#include <iostream>
using namespace std;

double hh;
float mm;
int ss;
int K;

int main(){
	cout<<"Selamat Datang di Automatic Convert to Second Programs\n";
	cout<<"Silahkan Isi Sesuai Petunjuk"<<endl;
	cout<<"Masukkan Jam(hh): ";
	cin>>hh;
	cout<<"Masukkan Menit(mm): ";
	cin>>mm;
	cout<<"Masukkan Detik(ss): ";
	cin>>ss;
	K=hh*3600+mm*60+ss;
	cout<<"Setelah diKonversi Hasilnya adalah "<<K;
	return 0;
}