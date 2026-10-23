#include <iostream>
using namespace std;

int main(){

    int A[2][2], B[2][1], C[2];

    cout << "Masukkan Matriks A(2x2): " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "Masukkan Matriks B(2x1): " << endl;
    for(int i=0; i<2; i++){
        cout << "B[" << i << "][0] = ";
        cin >> B[i][0];
    }

    C[0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
    C[1] = A[1][0]*B[0][0] + A[1][1]*B[1][0];

    cout << "Hasil perkalian Matriks A dan B adalah: " << endl;
    cout << C[0] << endl;
    cout << C[1] << endl; 

}