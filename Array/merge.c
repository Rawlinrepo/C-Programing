#include <stdio.h>

int main(){
       int arr1[] = {1,2,3,4,5};
       int arr2[] ={6,7,8,9,10};

       int arr3[(sizeof(arr1)/sizeof(arr1[0])) + (sizeof(arr2)/sizeof(arr2[0]))];
       
       for(int i = 0;i < (sizeof(arr1)/sizeof(arr1[0]));i++){
        arr3[i]=arr1[i];
       }
       for(int i = 0;i < (sizeof(arr2)/sizeof(arr2[0]));i++){
        arr3[i+(sizeof(arr1)/sizeof(arr1[0]))-1]=arr2[i];
       }
       for(int i = 0;i < (sizeof(arr3)/sizeof(arr3[0]))-1;i++){
        printf("%d ",arr3[i]);
       }
       //printf("%d ",arr3[3]);
}