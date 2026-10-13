/*
 * Program      : Permainan Tebak Angka (Tugas 4 AlProg)
 * Deskripsi    : Program interaktif permainan tebak angka dengan 3 tingkat kesulitan (Mudah, Sedang, Sulit).
 *                Pengguna menebak angka acak dalam rentang tertentu dengan batas percobaan tertentu,
 *                dan mendapatkan skor akhir berdasarkan tebakan yang benar hingga pengguna memilih keluar (opsi 4).
 * 
 * Initial State (I.S.) : 
 * - Pengguna belum memilih menu tingkat kesulitan.
 * - Pengguna belum menginputkan angka tebakan.
 * - Nilai skor awal masih 0.
 * 
 * Final State (F.S.)   : 
 * - Hasil tebakan (benar/salah) serta skor akhir ditampilkan ke layar.
 * - Program selesai/berhenti ketika pengguna memilih opsi keluar (opsi 4).
 */

#include <iostream>
using namespace std;

int main(){
    int pilihan, random_number, tebakan, percobaan, top;
    double skor=0.0;
    srand(time(NULL));
    do{
        cout 
        << "PERMAINAN TEBAK ANGKA\n"
        << "Ada 3 tingkat kesulitan:\n"
        << "1. Mudah\n"
        << "2. Sedang\n"
        << "3. Sulit\n"
        << "4. Exit\n"
        << "Ketik opsi untuk melanjutkan: ";
        cin >> pilihan;
        if(pilihan==1){
            percobaan=10; 
            top=50;
        }else if(pilihan==2){
            percobaan=7;
            top=100;
        }else if(pilihan==3){
            percobaan=5;
            top=500;
        }else if(pilihan==4){
            cout << "\nBye kau CUPU!!!\n";
        }else{
            cout << "\nDiluar OPSI Maseee!!!\n";
        }if(pilihan>=1&&pilihan<=3){
            cout << "\nAnda mempunyai " << percobaan << " percobaan untuk mengumpulkan 10 poin\n";
            for(int i=1;i<=percobaan;i++){
                cout << "\nPercobaan ke-" << i << "\n";
                random_number=(rand()%top)+1;
                cout << "Tebak angka antara 1 s.d. " << top << ": ";
                cin >> tebakan;
                while(tebakan<1||tebakan>top){ //no while
                    cout << "\nAngka yang anda masukan bukan 1-" << top << "!\n";
                    cout << "Tebak angka antara 1 s.d. " << top << ": ";
                    cin >> tebakan;
                }if(tebakan==random_number){
                    cout << "Anda Benar!\n"; 
                    skor+=(10.0/percobaan);
                }else{
                    cout << "Anda salah!, Jawabannya adalah " << random_number << "\n"; 
                }
            }
            cout << "\nskor akhir anda: " << int(skor) << "/10\n";
            cout << "\nMau main lagi?, kalo GAK pilih opsi 4!!!\n\n"; //gak perlu
            skor=0; //restart skor
        }
    }while(pilihan<4||pilihan>4);
}