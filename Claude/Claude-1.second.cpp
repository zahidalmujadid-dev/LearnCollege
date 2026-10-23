#include <iostream>
#include <string>
#include <iomanip> // Untuk pemformatan desimal (setprecision)

using namespace std;

int main() {
    string NIM, nama_Mahasiswa;
    float nilai_Tugas, nilai_UTS, nilai_UAS;

    cout << "=====================================\n";
    cout << "         INPUT NILAI MAHASISWA       \n";
    cout << "=====================================\n";

    // Menggunakan getline agar mendukung nama dengan spasi
    cout << "NAMA         : ";
    getline(cin >> ws, nama_Mahasiswa);

    cout << "NIM          : ";
    cin >> NIM;

    // Loop input nilai dengan validasi rentang 0 - 100
    while (true) {
        cout << "Nilai Tugas  : "; cin >> nilai_Tugas;
        cout << "Nilai UTS    : "; cin >> nilai_UTS;
        cout << "Nilai UAS    : "; cin >> nilai_UAS;

        if (nilai_Tugas >= 0 && nilai_Tugas <= 100 &&
            nilai_UTS >= 0   && nilai_UTS <= 100 &&
            nilai_UAS >= 0   && nilai_UAS <= 100) {
            break; // Input valid, keluar dari loop
        }

        cout << "\n[ERROR] Nilai harus berada dalam rentang 0 - 100!\n";
        cout << "Silakan masukkan ulang nilai:\n";
    }

    // Perhitungan nilai akhir (20% Tugas, 30% UTS, 50% UAS)
    float nilai_Akhir = (nilai_Tugas * 0.2f) + (nilai_UTS * 0.3f) + (nilai_UAS * 0.5f);

    // Penentuan grade
    char grade;
    if (nilai_Akhir >= 85) {
        grade = 'A';
    } else if (nilai_Akhir >= 70) {
        grade = 'B';
    } else if (nilai_Akhir >= 55) {
        grade = 'C';
    } else if (nilai_Akhir >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Output Hasil
    cout << "\n=====================================\n";
    cout << "       HASIL PERHITUNGAN NILAI       \n";
    cout << "=====================================\n";
    cout << "NAMA        : " << nama_Mahasiswa << "\n";
    cout << "NIM         : " << NIM << "\n";
    cout << fixed << setprecision(2); // Menampilkan 2 angka di belakang koma
    cout << "Nilai Akhir : " << nilai_Akhir << "\n";
    cout << "Grade Nilai : " << grade << "\n";
    cout << "=====================================\n";

    return 0;
}