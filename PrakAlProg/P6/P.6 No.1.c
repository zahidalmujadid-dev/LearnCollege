#include <stdio.h>

int main(){
    int arr[] = {1, 83, 9, 10, 3, 39, 92, 100, 3, 1, 3, 4, 0};
    int size = 13;

    for (int i = 0; i < size - 1; i ++){

        for (int j = 0; j < size - 1 - i; i++){

            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }

        }

    }

    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    return 0;

}