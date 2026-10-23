#include <iostream>
using namespace std;

int main(){

    int siswa[100];
    int waktu, absen, n=0;

    srand(time(NULL));
    for(int i = 0; i < 100; i+=1){siswa[i]=(rand()%10)+1;}

    //mencari pelari dengan waktu tertentu.
    cout << "Waktu yang dicari: "; cin >> waktu;
    while(siswa[n]!=waktu&&n<100){
        n++;
    }
    if(n>=100){
        cout << "gak ada";
    }else{
        cout << "Siswa absen: " << n+1 << "\ndengan waktu: " << siswa[n] <<endl;
    }
    for(int i=0; i<100; i++){
        cout << siswa[i];
        cout << " ";
    } 
    return 0;

}