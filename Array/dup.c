#include <stdio.h>

int main() {
    int arr[] = {4, 2, 32, 41, 99, 382, 121, 2332, 54, 3, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size-1;i++){
        for(int j = 0;j<size -1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j+1]= temp;
            }
        }
    }
    for(int i = 0; i < size-1;i++){
        for(int j = 0;j<size -1;j++){
            if(arr[i] == arr[j]){
                arr[j] = -1;
            }
        }
    }
    
    printf("Array in descending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}