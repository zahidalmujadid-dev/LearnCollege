#include <stdio.h>

int main(){
	int n, hasil=0;
	printf("1+2+3+...+n\nMasukkan n: ");
	scanf("%d", &n);
	while(n>=1){
		hasil+=n;
		n--;
	}
	printf("1+...+n = %d", hasil);
}