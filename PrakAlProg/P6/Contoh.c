#include <stdio.h>

int main(){
    int arr[] = {1, 83, 9, 10, 3, 39, 92, 100, 3, 1, 3, 4, 0};
    int size = 13;

    for (int i = 0; i < size - 1; i ++){

        for (int j = 0; j < size - 1 - i; j++){

            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

    }

    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
   
    int low = 0, high = size;
    
    int found;
    int target = 0;
    scanf("%d", &target);

    while(low <= high){
        int mid = low + (high - low)/2; 
    
        if(arr[mid]==target){
            found = mid;
            break;
        }else if(arr[mid]>target){
            high = mid - 1;
        }else if(arr[mid]<target){
            low = mid + 1;
        }else if(mid == 1){
            printf("Gak Ada");
            break;
        }else{
            printf("Lu inputin apa bre?");
            break;
        }

    }

    printf("Ada di urutan ke-%d", found+1);
   
    return 0;

}