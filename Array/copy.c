#include <stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5,6,74,6,4};

    int arr2[sizeof(arr1)/sizeof(arr1[0])];

    for(int i =0;i <sizeof(arr1)/sizeof(arr1[0]);i++){
        arr2[i] = arr1[i];
    }
    for(int i =0;i <sizeof(arr2)/sizeof(arr2[0]);i++){
        printf("%d ",arr2[i]);
    }

}