#include <stdio.h>

int main(){
    int input, onput;

    printf("Masukkan Bilangan ke-1: ");
    scanf("%d", &input);
    
    for(int i=2;i<=10;i++){
        printf("Masukkan Bilangan ke-%d: ", i);
        scanf("%d", &onput);
        if(onput<input){
            input=onput;
        }
    }
    
    printf("Bilangan Terkecilnya: %d", input);
    return 0;
}