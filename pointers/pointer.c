#include <stdio.h>

void ptr(int num){
    int* ptr1 = &num;
    printf("%u\n",ptr1);
    printf("%d",*ptr1);
}

int main(){
    int num = 2;
    ptr(num);
}