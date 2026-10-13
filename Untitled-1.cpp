/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Jari: ";
    int r;
    cin >> r;
    float pi = 3.14;
    float L;
    L = pi * pow(r, 2);
    cout << "Luasnya: " << L; 
    return 0;
}
#include <stdio.h>

int main(){
    int a=10;
    printf("%s", (a>5)? "Lebih besar dari 5" : "Lebih kecil");
    printf("\nAngka anda %d", a);
}
//a=10;
//print("Lebih besar dari 5" if a>5 else "Lebih kecil atau sama dengan 5")

//printf("kamu %d", angka)
*/
#include <iostream>
#include <random>
using namespace std;

int main(){
    uniform_int_distribution<> descr(1, 100);
    cout << descr(gen);
}