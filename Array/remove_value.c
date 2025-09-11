#include <stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5};
    int num = 2;

    for(int i = 0;i < sizeof(arr1)/sizeof(arr1[0]);i++){
        while(arr1[i] != num){
            printf("%d ",arr1[i]);
            break;
        }
    }
    
}