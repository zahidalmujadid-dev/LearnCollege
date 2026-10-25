/*
soal 2 alpro itu kita jumlahin seluruh bilangan ganjilnya terus mencari faktorialnya (secara individual) atau 
kita jumlahin semua bilangan ganjilnya dulu terus di faktorialkan
*/
/*
Jumlahkan bilangan ganjil dari 1 sampai 10. lalu hitung Faktorialnya
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int i; //Bilangan Ganjil
    long double hasil_1=0, hasil_2=1;
    for(i=1;i<=10;i++)
    {
        if(i%2==1)
        {
            hasil_1=hasil_1+i;
        }
    }
    cout<<hasil_1<<"!= ";
    for(int j=hasil_1;j>=1;--j)
    {
        hasil_2=hasil_2*j;
    }
    cout<<hasil_2;
}
\\kok tau ga bisa int biasa, karena saja coba buat cout setiap step dari for, kok di step keberapa angkanya tidak bertambah
*/

#include <iostream>
using namespace std;

int main()
{
    int hasil_1 = 0;
    double hasil_2 = 1;
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 1)
        {
            hasil_1 += i;//hasil_1=hasil_1+i
        }
    }
    cout << hasil_1 << "! = ";
    for(int j = hasil_1; j >= 1; j--)
    {
        hasil_2 *= j;
    }
    cout << hasil_2 << endl;
    return 0;
}