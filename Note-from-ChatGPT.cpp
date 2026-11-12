#include <iostream>
using namespace std;

const int minggu=7;
int konsumsiListrik[minggu];
int totalKonsumsi=0, whichDay=0, tertinggi=0;


int main(){
	cout << "Masukkan konsumsi selama 7 hari:\n";
	
	for (int i = 0; i < minggu; i++) {
		cout << "Masukkan konsumsi hari ke-" << i + 1 << ": ";
		cin >> konsumsiListrik[i];
		totalKonsumsi += konsumsiListrik[i];
	}

	for (int i = 0; i < minggu; i++) {
		if (tertinggi < konsumsiListrik[i]) {
			tertinggi = konsumsiListrik[i];
			whichDay = i;
		}
	}

	cout << "Total Konsumsi selama 7 hari	: " << totalKonsumsi << " kWh\n";
	cout << "Rata-rata Konsumsi		: " << totalKonsumsi/float(minggu) << " kWh\n";
	cout << "Konsumsi Listrik tertinggi	: " << tertinggi << " kWh\n";
	cout << "yang Terjadi pada Hari ke-" << whichDay+1 <<"\n"; 
}
