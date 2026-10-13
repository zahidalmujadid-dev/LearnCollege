#include <iostream>
using namespace std;

int main(){

    int A[2][2]={{5, 6}, {7, 8}};
    int B[2][1]={{9}, {10}};
    int C[2]={A[0][0]*B[0][0]+A[0][1]*B[1][0], A[1][0]*B[0][0]+A[1][1]*B[1][0]};

    cout << C[0];
    cout << C[1] << endl;

}