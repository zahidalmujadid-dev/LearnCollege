#include <iostream>
using namespace std;

int main(){
	cout << "1" << endl;
	for(int i=1;i<=5;i++){
		cout << "1 ";
		for(int j=1;j<=i;j++){
			cout << j*2 << " ";	
		}
		cout << endl;
	}
	return 0;
}
/*
#include <iostream>
using namespace std;

void printRow(int i){
    cout << "1 ";
    for(int j = 1; j <= i; j++){
        cout << j*2 << " ";
    }
    cout << endl;
}

int main(){
    cout << "1" << endl;
    for(int i = 1; i <= 5; i++){
        printRow(i);
    }
    return 0;
}
*/