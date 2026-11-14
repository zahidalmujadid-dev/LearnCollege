#include <iostream>
using namespace std;

int main() {
    int jam, menit, detik;
    int total_detik;

    // Input jam (0 - 23)
    do {
        cout << "Masukkan jam (0-23): ";
        cin >> jam;
        if (jam < 0 || jam >= 24) {
            cout << "Error: Jam harus di antara 0 sampai 23. Silakan coba lagi.\n\n";
        }
    } while (jam < 0 || jam >= 24);

    // Input menit (0 - 59)
    do {
        cout << "Masukkan menit (0-59): ";
        cin >> menit;
        if (menit < 0 || menit >= 60) {
            cout << "Error: Menit harus di antara 0 sampai 59. Silakan coba lagi.\n\n";
        }
    }while (menit < 0 || menit >= 60);
    

    // Input detik (0 - 59)
    do {
        cout << "Masukkan detik (0-59): ";
        cin >> detik;
        if (detik < 0 || detik >= 60) {
            cout << "Error: Detik harus di antara 0 sampai 59. Silakan coba lagi.\n\n";
        }
    } while (detik < 0 || detik >= 60);

    // Menghitung total detik
    total_detik = (jam * 3600) + (menit * 60) + detik;

    // Menampilkan hasil
    cout << "\nTotal detik: " << total_detik << "detik\n";

    return 0;
}
