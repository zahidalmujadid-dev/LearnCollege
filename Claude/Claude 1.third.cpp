#include <iostream>
#include <string>
#include <limits> // Diperlukan untuk numeric_limits

using namespace std;

// Fungsi bantuan untuk memastikan input berupa angka valid antara 0 - 100
float inputNilai(string namaNilai) {
    float nilai;
    while (true) {
        cout << namaNilai << " : ";
        cin >> nilai;

        // 1. Cek jika input bukan angka (cin mengalami error/fail)
        if (cin.fail()) {
            cout << "[ERROR] Input harus berupa angka!\n";
            cin.clear(); // Reset status error cin
            // Buang semua karakter salah yang tersisa di buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // 2. Cek jika rentang nilai salah (< 0 atau > 100)
        if (nilai < 0 || nilai > 100) {
            cout << "[ERROR] Nilai harus di antara 0 - 100!\n";
            continue;
        }

        // Jika lolos semua validasi, kembalikan nilainya
        return nilai;
    }
}

int main() {
    string NIM, nama_Mahasiswa;

    cout << "===== INPUT DATA MAHASISWA =====\n";
    cout << "NAMA        : ";
    getline(cin >> ws, nama_Mahasiswa);
    cout << "NIM         : ";
    cin >> NIM;

    // Memanggil fungsi inputNilai yang sudah kebal dari input huruf
    float nilai_Tugas = inputNilai("Nilai Tugas ");
    float nilai_UTS   = inputNilai("Nilai UTS   ");
    float nilai_UAS   = inputNilai("Nilai UAS   ");

    cout << "------------------------------------\n";
    float nilai_Akhir = (nilai_Tugas * 0.2f) + (nilai_UTS * 0.3f) + (nilai_UAS * 0.5f);
    cout << "Nilai Akhir : " << nilai_Akhir << endl;

    cout << "Grade Nilai : ";
    if (nilai_Akhir >= 85) cout << "A\n";
    else if (nilai_Akhir >= 70) cout << "B\n";
    else if (nilai_Akhir >= 55) cout << "C\n";
    else if (nilai_Akhir >= 40) cout << "D\n";
    else cout << "E\n";

    cout << "====================================\n";
    return 0;
}