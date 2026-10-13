#include <iostream>
using namespace std;

int main(){
    int pilihan, random_number, tebakan;
    double skor=0;
    srand(time(NULL));
    do{ //dont need it
        do{
            cout << string(30, '=') <<endl;
            cout << "PERMAINAN TEBAK ANGKA" <<endl;
            cout << string(30, '=') <<endl;
            cout << "Ada 3 tingkat kesulitan:" <<endl;
            cout << "1. Mudah" <<endl;
            cout << "2. Sedang" <<endl;
            cout << "3. Sulit" <<endl;
            cout << "4. Exit" <<endl;
            cout << "Ketik opsi untuk melanjutkan: ";
            cin >> pilihan;
            cout << string(30, '-') <<endl;
            if(pilihan==1){
                cout << string(30, '=');
                cout << "\nAnda Mempunyai 10 Percobaan untuk Mengumpulkan 10 Poin\n";
                cout << string(30, '=') <<endl;
                for(int i=1;i<=10;i++){
                    cout << "\nPercobaan ke-" << i <<endl;
                    cout << string(30, '-') <<endl;
                    random_number=(rand()%50)+1;
                    cout << "Tebak angka antara 1 s.d. 50: ";
                    cin >> tebakan;
                    while(tebakan<1||tebakan>50){ //gak perlu while dikertas
                        cout << "Angka yang anda masukan bukan 1-50!\n";
                        cout << "Masukkan angka antara 1 s.d. 50: ";
                        cin >> tebakan;
                    }if(tebakan==random_number){
                        cout << "Anda Benar!\n";
                        skor+=(10.0/10);
                    }else{
                        cout << "Anda salah!, Jawabannya adalah " << random_number <<endl;
                    }cout << string(30, '-') <<endl;
                }
            }else if(pilihan==2){
                cout << string(30, '=');
                cout << "\nAnda mempunyai 7 percobaan untuk mengumpulkan 10 poin\n";
                cout << string(30, '=') <<endl;
                for(int i=1;i<=7;i++){
                    cout << "\nPercobaan ke-" << i <<endl;
                    cout << string(30, '-') <<endl;
                    random_number=(rand()%100)+1;
                    cout << "Tebak angka antara 1 s.d. 100: ";
                    cin >> tebakan;
                    while(tebakan<1||tebakan>100){ //no while
                        cout << "Angka yang anda masukkan bukan 1-100!\n";
                        cout << "Tebak angka antara 1 s.d. 100: ";
                        cin >> tebakan;
                    }if(tebakan==random_number){
                        cout << "Anda Benar!\n";
                        skor+=(10.0/7);
                    }else{
                        cout << "Anda salah!, Jawabannya adalah " << random_number <<endl; 
                    }cout << string(30, '-') <<endl;
                }
            }else if(pilihan==3){
                cout << string(30, '=');
                cout << "\nAnda mempunyai 5 percobaan untuk mengumpulkan 10 poin\n";
                cout << string(30, '=') <<endl;
                for(int i=1;i<=5;i++){
                    cout << "\nPercobaan ke-" << i <<endl;
                    cout << string(30, '-') <<endl;
                    random_number=(rand()%500)+1;
                    cout << "Tebak angka antara 1 s.d. 500: ";
                    cin >> tebakan;
                    while(tebakan<1||tebakan>500){ //no while
                        cout << "Angka yang anda masukan bukan 1-500!\n";
                        cout << "Tebak angka antara 1 s.d. 500: ";
                        cin >> tebakan;
                    }if(tebakan==random_number){
                        cout << "Anda Benar!\n"; 
                        skor+=(10.0/7);
                    }else{
                        cout << "Anda salah!, Jawabannya adalah " << random_number <<endl; 
                    }cout << string(30, '-') <<endl;
                }
            }if(pilihan==4){
            cout << "Bye Kau Cupu";
            }else{
                cout << string(30, '=') <<endl;
                cout << "skor akhir anda: " << int(skor) <<endl;
                skor=0; //restart skor
                cout << string(30, '=') <<endl;
                cout << "\n\nMau main lagi?, kalo GAK pilih opsi 4!!!\n"; //gak perlu

            }
        }while(pilihan<1||pilihan>4);
    }while(pilihan>=1&&pilihan<=3); //gak perlu
}