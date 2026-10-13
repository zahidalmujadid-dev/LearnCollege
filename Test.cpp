/*
Program Penghitung Luas Segitiga Otomatis
*/
/*
#include <iostream>
using namespace std;

int a;
float t;
float L;

int main(){
    cout << "masukan alasnya ya su: ";
    cin >> a;
    cout << "sekarang masukan tinggi ya anjeng: ";
    cin >> t;
    L=(a*t)/2;
    cout << "ini hasilnya ya bangsat: " << L << " mana makasihnya anjeng!";
}
*/

/*
Program Konversi Jam/Waktu menjadi Detik
I.S.: User memasukan jam(hh), Menit(mm), dan Detik(ss)
F.S.: Program menampilkan hasil konversinya keDetik
*/
/*
#include <iostream>
using namespace std;

float h;
float m;
float s; //why float because bisa saja mereka mengisi langsung 1,5 jam
int K; //hasil konversi

int main(){
    cout<<"Selamat Datang di System Konversi Detik\nSilahkan isi sesuai petunjuk\n";
    cout<<"HH: ";
    cin>>h;
    cout<<"MM: ";
    cin>>m;
    cout<<"SS: ";
    cin>>s;
    K=(h*3600)+(m*60)+s;
    cout<<"Monggo: "<<K;
}
*/

#include <iostream>
using namespace std;

float hh,mm; //why float because bisa saja mereka bego mengisi dengan langsung 1,5 jam
int K,ss; //hasil konversi

int main(){
    cout<<"Selamat Datang di System Konversi Detik\nSilahkan isi sesuai petunjuk\n";
    cout<<"HH: ";
    cin>>hh;
    hh=hh*3600;
    cout<<"MM: ";
    cin>>mm;
    mm=mm*60;
    cout<<"SS: ";
    cin>>ss;
    K=hh+mm+ss;
    cout<<"Monggo: "<<K;
}
