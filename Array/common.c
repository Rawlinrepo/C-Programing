#include <stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {2,1,4,8,9,7,5,6};

    for(int i =0; i < sizeof(arr1)/sizeof(arr1[0]);i++){
        for(int j =0; j < sizeof(arr2)/sizeof(arr2[0]);j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
            }
        }
    }
    printf("are common in both arrays");
}