#include <stdio.h>
int main(){
    int arr[] = {4,2,32,4,2,54,3,70};
    int num = arr[0];
    for(int i = 1;i< sizeof(arr)/sizeof(arr[0]);i++){
        num += arr[i];
    }
    printf("%d is the Sum of the array",num);
}