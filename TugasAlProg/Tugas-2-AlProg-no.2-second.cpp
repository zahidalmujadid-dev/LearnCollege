/*
Program Cari Tahu Zodiac
*/

#include <iostream>
using namespace std;

int tanggal_Lahir;
int bulan_Lahir;

int main(){
	printf("Isilah Menggunakan Format angka tanpa awalan\n");
	printf("Masukan Tanggal Lahir kamu: ");
	cin >> tanggal_Lahir;
	printf("Masukan Bulan Lahir kamu: ");
	cin >> bulan_Lahir;
	while((tanggal_Lahir<1)||(bulan_Lahir>12)||(bulan_Lahir<1)||(tanggal_Lahir>31)){
		printf("Lebih teliti BLOG!\n\n");
        printf("Isilah Menggunakan Format angka tanpa awalan\n");
        printf("Masukan Tanggal Lahir kamu: ");
        cin >> tanggal_Lahir;
        printf("Masukan Bulan Lahir kamu: ");
        cin >> bulan_Lahir;
    }if(((tanggal_Lahir>=1)&&(tanggal_Lahir<=31))&&((bulan_Lahir>=1)&&(bulan_Lahir<=12))){
        if(((tanggal_Lahir>=21)&&(bulan_Lahir==3))||((tanggal_Lahir<=19)&&(bulan_Lahir==4))){//Aries
            cout<<"Aries";
        }else if(((tanggal_Lahir>=20)&&(bulan_Lahir==4))||((tanggal_Lahir<=20)&&(bulan_Lahir==5))){//Taurus
            cout<<"Taurus";
        }else if(((tanggal_Lahir>=21)&&(bulan_Lahir==5))||((tanggal_Lahir<=20)&&(bulan_Lahir==6))){//Gemini
            cout<<"Gemini";
        }else if(((tanggal_Lahir>=21)&&(bulan_Lahir==6))||((tanggal_Lahir<=22)&&(bulan_Lahir==7))){//Cancer
            cout<<"Canser";
        }else if(((tanggal_Lahir>=23)&&(bulan_Lahir==7))||((tanggal_Lahir<=22)&&(bulan_Lahir==8))){//Leo
            cout<<"Leo";
        }else if(((tanggal_Lahir>=23)&&(bulan_Lahir==8))||((tanggal_Lahir<=22)&&(bulan_Lahir==9))){//Virgo
            cout<<"Virgo";
        }else if(((tanggal_Lahir>=23)&&(bulan_Lahir==9))||((tanggal_Lahir<=22)&&(bulan_Lahir==10))){//Libra
            cout<<"Libra";
        }else if(((tanggal_Lahir>=23)&&(bulan_Lahir==10))||((tanggal_Lahir<=21)&&(bulan_Lahir==11))){//Scorpius
            cout<<"Scorpius";
        }else if(((tanggal_Lahir>=22)&&(bulan_Lahir==11))||((tanggal_Lahir<=21)&&(bulan_Lahir==12))){//Sagittarius
            cout<<"Sagittarius";
        }else if(((tanggal_Lahir>=22)&&(bulan_Lahir==12))||((tanggal_Lahir<=19)&&(bulan_Lahir==1))){//Capricornus
            cout<<"Capricornus";
        }else if(((tanggal_Lahir>=20)&&(bulan_Lahir==1))||((tanggal_Lahir<=18)&&(bulan_Lahir==2))){//Aquarius
            cout<<"Aquarius";
        }else {//Pisces
            cout<<"Pisces";
        }
	}
}