#include <stdio.h>

int main(){
    int max=0,arr[] = {1,10,43,24,11,3,25};
    int* ptr = arr;
    //printf("%d\n",*(ptr+2));
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(*ptr < *(ptr+i)){
            *ptr = *(ptr+i);
        }
    }
    
    printf("%d is the largest",*ptr);
}